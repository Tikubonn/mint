#include <mint.h>
#include <stddef.h>
#define max(a, b) ((a)<(b)?(b):(a))

static void mul_mint_manually_add (mint *numin, unsigned long offset, unsigned int seek, mint *numout){
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t size = real_size_mint(numout);
  size_t index;
  unsigned int car = 0;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numin);
    mint_cell numcb = get_mint(index + offset, seek, numout);
    unsigned int numres = numca + numcb + car;
    car = 0xff < numres;
    set_mint(numres, index + offset, seek, numout);
  }
}

void mul_mint_manually (mint *numa, mint *numb, mint *numout){
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t size = real_size_mint(numout);
  size_t index;
  for (index = 0; index < size; index++){
    mint_cell numc = get_mint(index, 0, numb);
    unsigned int seek;
    for (seek = 0; seek < 8; seek++){
      if (numc & (1u << seek)){
        mul_mint_manually_add(numa, index, seek, numout);
      }
    }
  }
  trim_mint(numout);
}
