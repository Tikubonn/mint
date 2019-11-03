#include <mint.h>
#include <stdbool.h>

bool is_lesser_or_equal_mint (mint *numa, mint *numb){
  return is_greater_mint(numa, numb) == false;
}
