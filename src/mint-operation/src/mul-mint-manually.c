#include <mint.h>
#include <stddef.h>

static void add (mint *numin, unsigned long offset, unsigned int seek, mint *numout){
  size_t size = mint_real_size(numout);
  unsigned int car = 0;
  for (size_t index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numin);
    mint_cell numcb = get_mint(index + offset, seek, numout);
    unsigned int numres = numca + numcb + car;
    car = 0xff < numres;
    set_mint(numres, index + offset, seek, numout);
  }
}

void mul_mint_manually (mint *number1, mint *number2, mint *result){
  size_t size = mint_real_size(result);
  for (size_t index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, number2);
    for (size_t seek = 0; seek < 8; seek++){
      if (numc & (1u << seek)){
        add(number1, index, seek, result);
      }
    }
  }
  trim_mint(result);
}
