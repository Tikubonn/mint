#include <mint.h>

void not_mint_manually (mint *numin, mint *numout){
  // unsigned long size = real_size_mint(numin);
  // unsigned long index;
  size_t size = real_size_mint(numin);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numin);
    set_mint(~numc, index, 0, numout);
  }
  trim_mint(numout);
}
