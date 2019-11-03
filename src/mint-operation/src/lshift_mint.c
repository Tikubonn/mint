#include <mint.h>
#include <stddef.h>

mint *lshift_mint (mint *numa, mint *numb){
  size_t seek = mint_seek_size(numb);
  size_t offset = mint_offset_size(numb);
  size_t size = mint_size(numa);
  mint *numout = make_mint(size + offset + (0 < seek ? 1 : 0));
	if (numout == NULL){
    return NULL;
  }
  lshift_mint_manually(numa, numb, numout);
  return numout;
}
