#include <mint.h>
#include <stddef.h>

void set_mint (mint_cell value, size_t index, size_t seek, mint *number){
  size_t seeka = seek;
  size_t seekb = 8 - seek;
  if (index < number->size){
    number->sequence[index] &= ~(0xff << seeka);
    number->sequence[index] |= value << seeka;
  }
  if (index +1 < number->size){
    number->sequence[index +1] &= ~(0xff >> seekb);
    number->sequence[index +1] |= value >> seekb;
  }
}
