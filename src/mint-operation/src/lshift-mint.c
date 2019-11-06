#include <mint.h>
#include <stddef.h>

mint *lshift_mint (mint *number1, mint *number2){
	if (number1 == NULL){
		return NULL;
	}
	if (number2 == NULL){
		return NULL;
	}
  size_t seek = mint_seek_size(number2);
  size_t offset = mint_offset_size(number2);
  size_t size = mint_size(number1);
  mint *result = make_mint(size + offset + (0 < seek ? 1 : 0));
	if (result == NULL){
    return NULL;
  }
  lshift_mint_manually(number1, number2, result);
  return result;
}
