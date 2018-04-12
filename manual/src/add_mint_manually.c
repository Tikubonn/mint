#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

void add_mint_manually (mint *numa, mint *numb, mint *numout){
  unsigned long size = size_mint(numout);
  unsigned long index;
  unsigned int car = 0;
  for (index = 0; index < size; index++){
    mint_cell numca = get_mint(index, 0, numa);  
    mint_cell numcb = get_mint(index, 0, numb);  
    unsigned int numres = numca + numcb + car;
    car = 0xff < numres;
    set_mint(numres, index, 0, numout);
  }
  trim_mint(numout);
}
