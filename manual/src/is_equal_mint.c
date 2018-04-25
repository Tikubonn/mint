#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

int is_equal_mint (mint *numa, mint *numb){
  // unsigned long sizea = real_size_mint(numa);
  // unsigned long sizeb = real_size_mint(numb);
  // unsigned long size = max(sizea, sizeb);
  // unsigned long index;
  size_t sizea = real_size_mint(numa);
  size_t sizeb = real_size_mint(numb);
  size_t size = max(sizea, sizeb);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    if (numca != numcb)
      return 0;
  }
  return 1;
}
