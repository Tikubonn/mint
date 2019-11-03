#include <mint.h>
#include <stddef.h>

void load_mint_from_int (int num, mint *numout){
  char *addressnum = (char*)&num;
  size_t size = sizeof(int);
  size_t index = size;
  while (0 < index--){
    set_mint(addressnum[index], index, 0, numout);
  }
  trim_mint(numout);
}

void load_mint_from_long (long num, mint *numout){
  char *addressnum = (char*)&num;
  size_t size = sizeof(long);
  size_t index = size;
  while (0 < index--){
    set_mint(addressnum[index], index, 0, numout);
  }
  trim_mint(numout);
}
