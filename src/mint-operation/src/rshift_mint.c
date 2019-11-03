#include <mint.h>
#include <stddef.h>

mint *rshift_mint (mint *numa, mint *numb){
  size_t seek = mint_seek_size(numb);
  size_t offset = mint_offset_size(numb);
  size_t size = mint_size(numa);
  mint *numout = make_mint(size - offset);
	if (numout == NULL){
    return NULL;
  }
  rshift_mint_manually(numa, numb, numout);
  return numout;
}
