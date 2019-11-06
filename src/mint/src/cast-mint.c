#include <mint.h>
#include <stddef.h>

int cast_mint_to_int (mint *num){
  int data = 0;
  size_t index = sizeof(int);
  while (0 < index--){
    data <<= 8;
    data |= get_mint(index, 0, num);
  }
  if (is_positive_mint(num)){
    data &= ~0 >> 1; // remove sign bit.
  }
  return data;
}

unsigned int cast_mint_to_uint (mint *num){
  unsigned int data = 0;
  size_t index = sizeof(int);
  while (0 < index--){
    data <<= 8;
    data |= get_mint(index, 0, num);
  }
  return data;
}

long cast_mint_to_long (mint *num){
  long data = 0;
  size_t index = sizeof(long);
  while (0 < index--){
    data <<= 8;
    data |= get_mint(index, 0, num);
  }
  if (is_positive_mint(num)){
    data &= ~0 >> 1; // remove sign bit.
  }
  return data;
}

unsigned long cast_mint_to_ulong (mint *num){
  unsigned long data = 0;
  size_t index = sizeof(long);
  while (0 < index--){
    data <<= 8;
    data |= get_mint(index, 0, num);
  }
  return data;
}
