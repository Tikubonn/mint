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
			
			/*
				~get_mint(...) の計算結果が int に拡張されてしまうため
				論理積を使って計算結果を 8bits までに切り詰めています。
			*/
			
			unsigned int value = (0xff & ~get_mint(index, 0, numin)) + increment;
			set_mint(value, index, 0, numout);
			increment = 0xff < (0xffff & value);
		}
	}
}
