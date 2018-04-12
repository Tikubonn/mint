#include <mint.h>

mint *make_tmp_mint_in (mint_cell *numdata, unsigned long size, mint *num){
  init_mint(numdata, size, num);
  clear_mint(num);
  return num;
}

mint *make_tmp_mint_from_int_in (int inum, mint *num){
  load_mint_from_int(inum, num);
  return num;
}

mint *make_tmp_mint_from_long_in (long inum, mint *num){
  load_mint_from_long(inum, num);
  return num;
}
