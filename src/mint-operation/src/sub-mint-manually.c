#include <mint.h>
#include <stddef.h>

void sub_mint_manually (mint *numa, mint *numb, mint *numout){
  size_t size = mint_real_size(numout);
  int car = 0;
  for (size_t index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index, 0, numb);
    int numres = numca - numcb - car;
    car = 0xff < (unsigned int)numres;
    set_mint(numres, index, 0, numout);
  }
  trim_mint(numout);
}
