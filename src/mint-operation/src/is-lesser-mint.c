#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

bool is_lesser_mint_in (mint *numa, mint *numb){
  size_t sizea = mint_real_size(numa);
  size_t sizeb = mint_real_size(numb);
  size_t index = max(sizea, sizeb);
  while (0 < index--){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
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

bool is_lesser_mint (mint *numa, mint *numb){
  if (is_positive_mint(numa)){
    if (is_positive_mint(numb)){
      return is_lesser_mint_in(numa, numb);
    }
    return false; // numa < numb
  }
  else {
    if (is_negative_mint(numb)){
      return is_lesser_mint_in(numb, numa);
    }
    return true; // numa < numb
  }
}
