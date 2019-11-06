#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

bool is_equal_mint (mint *number1, mint *number2){
  size_t size1 = mint_real_size(number1);
  size_t size2 = mint_real_size(number2);
  size_t size = max(size1, size2);
  for (size_t index = 0; index < size; index++){
    mint_cell value1 = get_mint(index, 0, number1);
    mint_cell value2 = get_mint(index, 0, number2);
    if (value1 != value2){
      return false;
    }
  }
  return true;
}
