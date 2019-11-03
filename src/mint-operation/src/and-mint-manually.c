#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

void and_mint_manually (mint *numa, mint *numb, mint *numout){
  size_t size = mint_real_size(numout);
  for (size_t index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    set_mint(numca & numcb, index, 0, numout);
  }
  trim_mint(numout);
}
