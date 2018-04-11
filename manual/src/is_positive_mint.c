#include <mint.h>
#define is_positive(a) !(a & 0b10000000)

int is_positive_mint (mint *num){
  unsigned long size = size_mint(num);
  return is_positive(num->address_beginning[size -1]);
}
