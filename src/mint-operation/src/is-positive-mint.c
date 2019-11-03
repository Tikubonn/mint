#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define is_positive(a) !(a & 0b10000000)

bool is_positive_mint (mint *num){
  size_t size = mint_real_size(num);
  return is_positive(num->address_beginning[size -1]) ? true : false;
}
