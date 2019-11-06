#include <mint.h>
#include <stdbool.h>

bool is_unequal_mint (mint *number1, mint *number2){
  return is_equal_mint(number1, number2) == false;
}
