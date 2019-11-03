#include <mint.h>
#include <stddef.h>

/*
  numout = sizeof numa + numb / 8 + 1
  numb = 0 <= numb 
*/

void lshift_mint_manually (mint *numa, mint *numb, mint *numout){
  clear_mint(numout);
  size_t seek = mint_seek_size(numb);
  size_t offset = mint_offset_size(numb);
  size_t size = mint_real_size(numout);
  for (size_t index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numa);
    set_mint(numc, index + offset, seek, numout);
  }
}
