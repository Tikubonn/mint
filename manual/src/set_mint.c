#include <mint.h>

void set_mint (mint_cell numc, size_t index, size_t seek, mint *numin){
  // unsigned int seeka = seek;
  // unsigned int seekb = 8 - seek;
  // unsigned long size = real_size_mint(numin);
  size_t seeka = seek;
  size_t seekb = 8 - seek;
  size_t size = real_size_mint(numin);
  if (index < size){
    numin->address_beginning[index] &= ~(0xff << seeka);
    numin->address_beginning[index] |= numc << seeka;
  }
  if (index +1 < size){
    numin->address_beginning[index +1] &= ~(0xff >> seekb);
    numin->address_beginning[index +1] |= numc >> seekb;
  }
}
