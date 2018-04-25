#include <mint.h>
#include <stddef.h>
#define is_negative(a) (a & 0b10000000)

int is_negative_mint (mint *num){
  // unsigned long size = real_size_mint(num);
  size_t size = real_size_mint(num);
  return is_negative(num->address_beginning[size -1]) ? 1 : 0;
}
