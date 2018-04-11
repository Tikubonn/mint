#include <stdlib.h>
#include <mint.h>

mint *make_mint (unsigned long size){
  mint_cell *numdata = malloc(sizeof(mint_cell) * size);
  mint *num = malloc(sizeof(mint));
  init_mint(numdata, sizeof(mint_cell) * size, num);
  clear_mint(num);
  return num;
}

mint *make_mint_from_int (int num){
  mint *numout = make_mint(sizeof(int));
  load_mint_from_int(num, numout);
  return numout;
}

mint *make_mint_from_long (long num){
  mint *numout = make_mint(sizeof(long));
  load_mint_from_long(num, numout);
  return numout;
}
