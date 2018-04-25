#include <mint.h>
#include <stddef.h>

void copy_mint_manually (mint *numin, mint *numout){
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t size = real_size_mint(numout);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numin);
    set_mint(numc, index, 0, numout);
  }
  trim_mint(numout);
}
