#include <mint.h>
#include <stddef.h>
#include <stdbool.h>

/*
	mint がゼロかどうかを判定する関数です。
*/

bool is_zero_mint (mint *number){
	for (size_t index = 0; index < number->seek; index++){
		if (number->sequence[index] != 0){
			return false;
		}
	}
	return true;
}
