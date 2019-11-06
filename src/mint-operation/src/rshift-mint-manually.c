#include <mint.h>
#include <stddef.h>

/*
  result = sizeof number1 - number2 / 8 + 1
  number2 = 0 <= number2
*/

void rshift_mint_manually (mint *number1, mint *number2, mint *result){
  size_t seek = mint_seek_size(number2);
  size_t offset = mint_offset_size(number2);
  size_t size = mint_real_size(result);
  for (size_t index = 0; index < size; index++){
    mint_cell value = get_mint(index + offset, seek, number1);
    set_mint(value, index, 0, result);
  }
	trim_mint(result);
}
