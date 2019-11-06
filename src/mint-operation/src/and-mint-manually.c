#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

void and_mint_manually (mint *number1, mint *number2, mint *result){
  size_t size = mint_real_size(result);
  for (size_t index = 0; index < size; index++){
    mint_cell value1 = get_mint(index, 0, number1);
    mint_cell value2 = get_mint(index, 0, number2);
    set_mint(value1 & value2, index, 0, result);
  }
  trim_mint(result);
}
