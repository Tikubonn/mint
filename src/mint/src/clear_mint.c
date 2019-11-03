#include <mint.h>
#include <stddef.h>

void clear_mint (mint *numout){
  size_t size = mint_real_size(numout);
  size_t index = size;
  while (0 < index--){
    set_mint(0x00, index, 0, numout);
  }
}
