#include <mint.h>
#include <stdbool.h>

bool is_unequal_mint (mint *numa, mint *numb){
  return is_equal_mint(numa, numb) == false;
}
