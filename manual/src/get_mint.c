#include <mint.h>
#include <stddef.h>
#define is_negative(a) (a & 0b10000000)

mint_cell get_mint (size_t index, size_t seek, mint *numin){
  mint_cell numc = 0;
  // unsigned int seeka = seek;
  // unsigned int seekb = 8 - seek;
  // unsigned long size = real_size_mint(numin);
  size_t seeka = seek;
  size_t seekb = 8 - seek;
  size_t size = real_size_mint(numin);
  if (index < size){
    numc &= ~(0xff >> seeka);
    numc |= numin->address_beginning[index] >> seeka;
  }
  else {
    numc |= (is_negative(numin->address_beginning[size -1]) ? 0xff : 0) >> seeka;
  }
  if (index +1 < size){
    numc &= ~(0xff << seekb);
    numc |= numin->address_beginning[index +1] << seekb;
  }
  else {
    numc |= (is_negative(numin->address_beginning[size -1]) ? 0xff : 0) << seekb;
  }
  return numc;
}
