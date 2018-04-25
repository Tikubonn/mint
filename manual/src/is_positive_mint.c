#include <mint.h>
#include <stddef.h>
#define is_positive(a) !(a & 0b10000000)

int is_positive_mint (mint *num){
  // unsigned long size = real_size_mint(num);
  size_t size = real_size_mint(num);
  return is_positive(num->address_beginning[size -1]);
}
