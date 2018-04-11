#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

int is_lesser_or_equal_mint (mint *numa, mint *numb){
  return !is_greater_mint(numa, numb);
}
