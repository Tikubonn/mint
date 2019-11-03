#include <mint.h>
#include <stddef.h>

void copy_mint_manually (mint *numin, mint *numout){
  size_t size = mint_real_size(numout);
  for (size_t index = 0; index < size; index++){
    mint_cell cell = get_mint(index, 0, numin);
    set_mint(cell, index, 0, numout);
  }
  trim_mint(numout);
}
