#include <mint.h>
#include <stddef.h>

void set_mint (mint_cell numc, size_t index, size_t seek, mint *numin){
  size_t seeka = seek;
  size_t seekb = 8 - seek;
  size_t size = mint_real_size(numin);
  if (index < size){
    numin->address_beginning[index] &= ~(0xff << seeka);
    numin->address_beginning[index] |= numc << seeka;
  }
  if (index +1 < size){
    numin->address_beginning[index +1] &= ~(0xff >> seekb);
    numin->address_beginning[index +1] |= numc >> seekb;
  }
}
