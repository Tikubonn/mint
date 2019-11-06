#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *mul_mint (mint *number1, mint *number2){
	if (number1 == NULL){
		return NULL;
	}
	if (number2 == NULL){
		return NULL;
	}
  size_t sizea = mint_size(number1);
  size_t sizeb = mint_size(number2);
  size_t size = max(sizea, sizeb);
  mint *result = make_mint(size * 2);
	if (result == NULL){
    return NULL;
  }
  mul_mint_manually(number1, number2, result);
  return result;
}
