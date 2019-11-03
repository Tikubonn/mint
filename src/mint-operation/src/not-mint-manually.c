#include <mint.h>
#include <stddef.h>

void not_mint_manually (mint *numin, mint *numout){
  size_t size = mint_real_size(numin);
  for (size_t index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numin);
    set_mint(~numc, index, 0, numout);
  }
  trim_mint(numout);
}
