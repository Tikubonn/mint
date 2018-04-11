#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

int is_unequal_mint (mint *numa, mint *numb){
  unsigned long sizea = size_mint(numa);
  unsigned long sizeb = size_mint(numb);
  unsigned long size = max(sizea, sizeb);
  unsigned long index;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    if ((numca != numcb) == 0)
      return 0;
  }
  return 1;
}
