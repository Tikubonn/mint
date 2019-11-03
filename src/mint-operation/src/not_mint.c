#include <mint.h>
#include <stddef.h>

mint *not_mint (mint *numin){
  size_t size = mint_size(numin);
  mint *numout = make_mint(size);
	if (numout == NULL){
    return NULL;
  }
  not_mint_manually(numin, numout);
  return numout;
}
