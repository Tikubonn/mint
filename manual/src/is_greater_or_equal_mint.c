#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

int is_greater_or_equal_mint (mint *numa, mint *numb){
  return !is_less_mint(numa, numb);
}
