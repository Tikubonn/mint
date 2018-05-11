#include <mint.h>
#include <stddef.h>

mint *not_mint (mint *numin){
	if (numin == NULL) return NULL;
  size_t size = size_mint(numin);
  mint *numout = make_mint(size);
	if (numout == NULL) return NULL;
  not_mint_manually(numin, numout);
  return numout;
}
