#include <mint.h>
#include <stddef.h>

/*
	負数の mint の各要素の絶対値を返します。
	increment の計算が必要なくなった場合にはループを中断し即座に値を返します。
	この関数を使うことで別途で保存することなく、mint の各要素の絶対値を取得することができます。
*/

static mint_cell get_nega (size_t index, mint *number){
	int value;
	int increment = 1;
	for (size_t ind = 0; ind <= index; ind++){
		if (0 < increment){
			if (ind < number->size){
				value = ~number->sequence[ind] + increment;
				increment = 0xff < value;
			}
			else {
				value = 0 + increment;
				increment = 0;
			}
		}
		else {
			if (index < number->size){
				value = ~number->sequence[index];
				//increment = 0;
				break;
			}
			else {
				value = 0;
				//increment = 0;
				break;
			}
		}
	}
	return value;
}

/*
	負数の mint の各要素の絶対値を返します。
*/

static mint_cell get_negative (size_t index, size_t seek, mint *number){
	mint_cell result = 0;
	size_t seek1 = seek;
	size_t seek2 = 8 - seek;
	result |= get_nega(index, number) >> seek1;
	result |= get_nega(index +1, number) << seek2;
	return result;
}

/*
	mint の各要素の絶対値を返します。
	この関数は floor_mint 関数を副作用なく実装するために定義されました。
*/

mint_cell get_absolute_mint (size_t index, size_t seek, mint *number){
	if (is_negative_mint(number) == true){
		return get_negative(index, seek, number);
	}
	else {
		return get_mint(index, seek, number);
	}
}
