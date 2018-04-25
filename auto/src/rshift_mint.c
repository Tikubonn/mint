#include <mint.h>
#include <stddef.h>

mint *rshift_mint (mint *numa, mint *numb){
  // unsigned long seek = seek_size_mint(numb);
  // unsigned long offset = offset_size_mint(numb);
  // unsigned long size = size_mint(numa);
  size_t seek = seek_size_mint(numb);
  size_t offset = offset_size_mint(numb);
  size_t size = size_mint(numa);
  mint *numout = make_mint(size - offset);
  rshift_mint_manually(numa, numb, numout);
  return numout;
}
