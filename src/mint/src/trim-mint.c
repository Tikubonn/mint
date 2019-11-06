#include <mint.h>
#include <stddef.h>

static void trim_mint_negative (mint *number){
  size_t index = number->size;
  while (1 < index--){
    mint_cell value1 = get_mint(index, 0, number);
    mint_cell value2 = get_mint(index -1, 0, number);
    if (value1 == 0xff){
      if (value2 == 0xff){
        continue;
      }
      if (value2 & 0b10000000){
        number->seek = index; // contain value1
        return;
      }
      number->seek = index +1; // value2 only
      return;
    }
    number->seek = index +1; // contain value1
    return;
  }
  number->seek = index +1; // contain value1
  return;
}

static void trim_mint_positive (mint *number){
  size_t index = number->size;
  while (1 < index--){
    mint_cell value1 = get_mint(index, 0, number);
    mint_cell value2 = get_mint(index -1, 0, number);
    if (value1 == 0){
      if (value2 == 0){
        continue;
      }
      if (value2 & 0b10000000){
        number->seek = index +1; // contain value1
        return;
      }
      number->seek = index; // value2 only
      return;
    }
    number->seek = index +1; // contain value1
    return;
  }
  number->seek = index +1; // contain value1
  return;
}

void trim_mint (mint *number){
  if (is_negative_mint(number)){
    return trim_mint_negative(number);
  }
  return trim_mint_positive(number);
}

/*
static void trim_mint_negative (mint *num){
  size_t index = mint_real_size(num);
  while (1 < index--){
    mint_cell numca = get_mint(index, 0, num);
    mint_cell numcb = get_mint(index -1, 0, num);
    if (numca == 0xff){
      if (numcb == 0xff){
        continue;
      }
      if (numcb & 0b10000000){
        num->address = num->address_beginning + index; // contain numca
        return;
      }
      num->address = num->address_beginning + index +1; // numcb only
      return;
    }
    num->address = num->address_beginning + index +1; // contain numca
    return;
  }
  num->address = num->address_beginning + index +1; // contain numca
  return;
}

static void trim_mint_positive (mint *num){
  size_t index = mint_real_size(num);
  while (1 < index--){
    mint_cell numca = get_mint(index, 0, num);
    mint_cell numcb = get_mint(index -1, 0, num);
    if (numca == 0){
      if (numcb == 0){
        continue;
      }
      if (numcb & 0b10000000){
        num->address = num->address_beginning + index +1; // contain numca
        return;
      }
      num->address = num->address_beginning + index; // numcb only
      return;
    }
    num->address = num->address_beginning + index +1; // contain numca
    return;
  }
  num->address = num->address_beginning + index +1; // contain numca
  return;
}

void trim_mint (mint *num){
  if (is_negative_mint(num)){
    return trim_mint_negative(num);
  }
  return trim_mint_positive(num);
}
*/
