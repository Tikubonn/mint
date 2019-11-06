#include <mint.h>
#include <stddef.h>

/*
	符号を反転させる関数です。
*/

mint *minus_mint (mint *number){
	if (number == NULL){
		return NULL;
	}
	size_t size = mint_size(number);
	mint *result = make_mint(size +1);
	if (result == NULL){
		return NULL;
	}
	minus_mint_manually(number, result);
	return result;
}
