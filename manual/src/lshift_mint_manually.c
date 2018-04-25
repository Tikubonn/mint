#include <mint.h>
#include <stddef.h>

/*
  numout = sizeof numa + numb / 8 + 1
  numb = 0 <= numb 
*/

void lshift_mint_manually (mint *numa, mint *numb, mint *numout){
  clear_mint(numout);
  // unsigned long seek = seek_size_mint(numb);
  // unsigned long offset = offset_size_mint(numb);
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t seek = seek_size_mint(numb);
  size_t offset = offset_size_mint(numb);
  size_t size = real_size_mint(numout);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numa);
    set_mint(numc, index + offset, seek, numout);
  }
}
