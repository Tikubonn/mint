#include <mint.h>
#include <stddef.h>

/*
  result = sizeof number1 + number2 / 8 + 1
  number2 = 0 <= number2 
*/

void lshift_mint_manually (mint *number1, mint *number2, mint *result){
  clear_mint(result);
  size_t seek = mint_seek_size(number2);
  size_t offset = mint_offset_size(number2);
  size_t size = mint_real_size(result);
  for (size_t index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, number1);
    set_mint(numc, index + offset, seek, result);
  }
}
