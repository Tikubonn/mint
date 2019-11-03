#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

bool is_equal_mint (mint *numa, mint *numb){
  size_t sizea = mint_real_size(numa);
  size_t sizeb = mint_real_size(numb);
  size_t size = max(sizea, sizeb);
  for (size_t index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    if (numca != numcb){
      return false;
    }
  }
  return true;
}
