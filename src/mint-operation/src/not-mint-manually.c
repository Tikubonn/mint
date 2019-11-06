#include <mint.h>
#include <stddef.h>

void not_mint_manually (mint *number, mint *result){
  size_t size = mint_real_size(number);
  for (size_t index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, number);
    set_mint(~numc, index, 0, result);
  }
  trim_mint(result);
}
