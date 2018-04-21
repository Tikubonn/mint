#include <mint.h>

void clear_mint (mint *numout){
  unsigned size = real_size_mint(numout);
  while (size--)
    set_mint(0x00, size, 0, numout);
  trim_mint(numout);
}
