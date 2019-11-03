#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define is_negative(a) (a & 0b10000000)

bool is_negative_mint (mint *num){
  size_t size = mint_real_size(num);
  return is_negative(num->address_beginning[size -1]) ? true : false;
}
