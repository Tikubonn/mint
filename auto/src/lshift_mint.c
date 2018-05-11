#include <mint.h>
#include <stddef.h>

mint *lshift_mint (mint *numa, mint *numb){
  size_t seek = seek_size_mint(numb);
  size_t offset = offset_size_mint(numb);
  size_t size = size_mint(numa);
  mint *numout = make_mint(size + offset + (seek ? 1 : 0));
  lshift_mint_manually(numa, numb, numout);
  return numout;
}
