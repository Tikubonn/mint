#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

static bool lesserp (mint *number1, mint *number2){
  size_t size1 = mint_real_size(number1);
  size_t size2 = mint_real_size(number2);
  size_t index = max(size1, size2);
  while (0 < index--){
    mint_cell numca = get_mint(index, 0, number1);
    mint_cell numcb = get_mint(index, 0, number2);
    if (numca == 0 && numcb == 0){
      continue;
    }
    if (numca < numcb){
      return true;
    }
    return false;
  }
  return false;
}

bool is_lesser_mint (mint *number1, mint *number2){
  if (is_positive_mint(number1)){
    if (is_positive_mint(number2)){
      return lesserp(number1, number2);
    }
    return false; // number1 < number2
  }
  else {
    if (is_negative_mint(number2)){
      return lesserp(number2, number1);
    }
    return true; // number1 < number2
  }
}
