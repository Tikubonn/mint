#include <mint.h>
#include <stddef.h>
#include <stdbool.h>

/*
	mint が正数であるかどうかを判定する関数です。
	mint が 0 であった場合には false を返します。
*/

bool is_positive_mint (mint *number){
	return 
		is_zero_mint(number) == false && 
		is_negative_mint(number) == false;
}
