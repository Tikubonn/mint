#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

void or_mint_manually (mint *numa, mint *numb, mint *numout){
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t size = real_size_mint(numout);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    set_mint(numca | numcb, index, 0, numout);
  }
  trim_mint(numout);
}
