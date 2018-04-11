#include <mint.h>
#define is_negative(a) (a & 0b10000000)

int is_negative_mint (mint *num){
  unsigned long size = size_mint(num);
  return num->address_beginning[size -1] & 0b10000000;
}
