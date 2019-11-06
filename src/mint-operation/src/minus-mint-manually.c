#include <mint.h>
#include <stddef.h>

/*
	mint の符号を反転させる関数です。
	引数 numin, numout が同じでもきちんと動作します。
*/

void minus_mint_manually (mint *numin, mint *numout){
	if (is_zero_mint(numin) == false){
		int increment = 1;
		size_t size = mint_real_size(numout);
		for (size_t index = 0; index < size; index++){
			int value = ~get_mint(index, 0, numin) + increment;
			set_mint(value, index, 0, numout);
			increment = 0xff < increment;
		}
	}
}

/*
static void not (mint *number){
	for (size_t index = 0; index < number->size; index++){
		number->sequence[index] = ~(number->sequence[index]);
	}
}

static void increase (mint *number){
	int carried = 0;
	for (size_t index = 0; index < number->size; index++){
		int value = number->sequence[index] + 1 + carried;
		number->sequence[index] = value & 0xff;
		if (0xff < value){
			carried = 1;
		}
		else {
			break;
		}
	}
}

void minus_mint_manually (mint *number){
	if (is_zero_mint(number) == false){
		if (is_positive_mint(number) == true){
			not(number);
			increase(number);
			trim_mint(number);
		}
		else {
			not(number);
			increase(number);
			trim_mint(number);
		}
	}
}
*/
