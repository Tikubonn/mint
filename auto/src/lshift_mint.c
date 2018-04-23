#include <mint.h>

mint *lshift_mint (mint *numa, mint *numb){
  unsigned long seek = seek_size_mint(numb);
  unsigned long offset = offset_size_mint(numb);
  unsigned long size = size_mint(numa);
  mint *numout = make_mint(size + offset + (seek ? 1 : 0));
  lshift_mint_manually(numa, numb, numout);
  return numout;
}
