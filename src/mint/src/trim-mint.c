#include <mint.h>
#include <stddef.h>

static void trim_mint_negative (mint *number){
  for (size_t index = number->size; 1 < index--;){
    mint_cell value1 = get_mint(index, 0, number);
    mint_cell value2 = get_mint(index -1, 0, number);
    if (value1 == 0xff){
      if (!(value2 & 0b10000000)){
        number->seek = index +1;
        return;
      }
    }
    else {
      number->seek = index +1;
      return;
    }
  }
  number->seek = 1;
  return;
}

static void trim_mint_positive (mint *number){
  for (size_t index = number->size; 1 < index--;){
    mint_cell value1 = get_mint(index, 0, number);
    mint_cell value2 = get_mint(index -1, 0, number);
    if (value1 == 0){
      if (value2 & 0b10000000){
        number->seek = index +1;
        return;
      }
    }
    else {
      number->seek = index +1;
      return;
    }
  }
  number->seek = 1;
  return;
}

void trim_mint (mint *number){
  if (is_negative_mint(number) == true){
    return trim_mint_negative(number);
  }
  else {
    return trim_mint_positive(number);
  }
}
