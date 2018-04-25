#include <mint.h>

int is_greater_or_equal_mint (mint *numa, mint *numb){
  return !is_lesser_mint(numa, numb);
}
