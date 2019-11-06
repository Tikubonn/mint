#include <mint.h>
#include <stdbool.h>

bool is_lesser_or_equal_mint (mint *number1, mint *number2){
  return is_greater_mint(number1, number2) == false;
}
