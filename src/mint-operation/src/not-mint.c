#include <mint.h>
#include <stddef.h>

mint *not_mint (mint *number){
	if (number == NULL){
		return NULL;
	}
  size_t size = mint_size(number);
  mint *result = make_mint(size);
	if (result == NULL){
    return NULL;
  }
  not_mint_manually(number, result);
  return result;
}
