#include <mint.h>
#include <stdbool.h>

bool is_greater_or_equal_mint (mint *number1, mint *number2){
  return is_lesser_mint(number1, number2) == false;
}
