#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

static bool greaterp (mint *number1, mint *number2){
  size_t size1 = mint_real_size(number1);
  size_t size2 = mint_real_size(number2);
  size_t index = max(size1, size2);
  while (0 < index--){
    mint_cell value1 = get_mint(index, 0, number1);
    mint_cell value2 = get_mint(index, 0, number2);
    if (value1 == 0 && value2 == 0){
      continue;
    }
    if (value1 > value2){
      return true;
    }
    return false;
  }
  return false;
}

bool is_greater_mint (mint *number1, mint *number2){
  if (is_positive_mint(number1)){
    if (is_positive_mint(number2)){
      return greaterp(number1, number2);
    }
    return true; // number1 > number2
  }
  else {
    if (is_negative_mint(number2)){
      return greaterp(number2, number1);
    }
    return false; // number1 < number2
  }
}