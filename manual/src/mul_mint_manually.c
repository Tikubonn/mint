#include <mint.h>

static void mul_mint_manually_add (mint *numin, unsigned long offset, unsigned int seek, mint *numout){
  unsigned long size = size_mint(numin);
  unsigned int car = 0;
  unsigned long index;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numin);
    mint_cell numcb = get_mint(index + offset, seek, numout);
    unsigned int numres = numca + numcb + car;
    car = 0xff < numres;
    set_mint(numres, index + offset, seek, numout);
  }
}

void mul_mint_manually (mint *numa, mint *numb, mint *numout){
  unsigned long size = size_mint(numb);
  unsigned long index;
  for (index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numb);
    unsigned int seek;
    for (seek = 0; seek < 8; seek++){
      if (numc & (1u << seek)){
        mul_mint_manually_add(numa, index, seek, numout);
      }
    }
  }
}
