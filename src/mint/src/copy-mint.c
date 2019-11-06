#include <mint.h>
#include <stddef.h>

extern mint *copy_mint (mint *numin){
  size_t size = mint_size(numin);
  mint *numout = make_mint(size);
  if (numout == NULL){
    return NULL;
  }
  copy_mint_manually(numin, numout);
  return numout;
}
