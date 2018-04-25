#include <mint.h>
#include <stddef.h>

void load_mint_from_int (int num, mint *numout){
  char *addressnum = (char*)&num;
  // int size = sizeof(int);
  size_t size = sizeof(int);
  while (size--){
    set_mint(addressnum[size], size, 0, numout);
  }
  trim_mint(numout);
}

void load_mint_from_long (long num, mint *numout){
  char *addressnum = (char*)&num;
  // int size = sizeof(long);
  size_t size = sizeof(long);
  while (size--){
    set_mint(addressnum[size], size, 0, numout);
  }
  trim_mint(numout);
}
