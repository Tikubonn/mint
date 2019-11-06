#include <mint.h>
#include <stddef.h>
#define max(a, b) ((a)<(b)?(b):(a))

mint *rshift_mint (mint *number1, mint *number2){
	if (number1 == NULL){
		return NULL;
	}
	if (number2 == NULL){
		return NULL;
	}
  size_t offset = mint_offset_size(number2);
  size_t size = mint_size(number1);
  mint *result = make_mint(max(1, size - offset));
	if (result == NULL){
    return NULL;
  }
  rshift_mint_manually(number1, number2, result);
  return result;
}
