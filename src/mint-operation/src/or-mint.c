#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *or_mint (mint *number1, mint *number2){
	if (number1 == NULL){
		return NULL;
	}
	if (number2 == NULL){
		return NULL;
	}
  size_t size1 = mint_size(number1);
  size_t size2 = mint_size(number2);
  size_t size = max(size1, size2);
  mint *result = make_mint(size);
	if (result == NULL){
    return NULL;
  }
  or_mint_manually(number1, number2, result);
  return result;
}
