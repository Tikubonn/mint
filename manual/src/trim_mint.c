#include <mint.h>

static void trim_mint_negative (mint *num){
  unsigned long count = size_mint(num);
  while (1 < count--){
    mint_cell numca = get_mint(count, 0, num);
    mint_cell numcb = get_mint(count -1, 0, num);
    if (numca == 0xff){
      if (numcb == 0xff){
        continue;
      }
      if (numcb & 0b10000000){
        num->address = num->address_beginning + count; // contain numca
        return;
      }
      num->address = num->address_beginning + count +1; // numcb only
      return;
    }
    num->address = num->address_beginning + count +1; // contain numca
    return;
  }
  num->address = num->address_beginning + count +1; // contain numca
  return;
}

static void trim_mint_positive (mint *num){
  unsigned long count = size_mint(num);
  while (1 < count--){
    mint_cell numca = get_mint(count, 0, num);
    mint_cell numcb = get_mint(count -1, 0, num);
    if (numca == 0){
      if (numcb == 0){
        continue;
      }
      if (numcb & 0b10000000){
        num->address = num->address_beginning + count +1; // contain numca
        return;
      }
      num->address = num->address_beginning + count; // numcb only
      return;
    }
    num->address = num->address_beginning + count +1; // contain numca
    return;
  }
  num->address = num->address_beginning + count +1; // contain numca
  return;
}

void trim_mint (mint *num){
  if (is_negative_mint(num))
    return trim_mint_negative(num);
  return trim_mint_positive(num);
}
