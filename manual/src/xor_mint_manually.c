#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

void xor_mint_manually (mint *numa, mint *numb, mint *numout){
  unsigned long sizea = size_mint(numa);
  unsigned long sizeb = size_mint(numb);
  unsigned long size = max(sizea, sizeb);
  unsigned long index;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    set_mint(numca ^ numcb, index, 0, numout);
  }
}
