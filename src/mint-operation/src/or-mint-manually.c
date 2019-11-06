#include <mint.h>
#include <stddef.h>

void or_mint_manually (mint *number1, mint *number2, mint *result){
  size_t size = mint_real_size(result);
  for (size_t index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, number1);
    mint_cell numcb = get_mint(index, 0, number2);
    set_mint(numca | numcb, index, 0, result);
  }
  trim_mint(result);
}
