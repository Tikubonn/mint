#pragma once
#include <alloca.h>
#include <mint.h>

#define make_tmp_mint(size)\
make_tmp_mint_in(\
  alloca(sizeof(mint) * size), size,\
  alloca(sizeof(mint)))

#define make_tmp_mint_from_int(num)\
make_tmp_mint_from_int_in(num,\
  make_tmp_mint(sizeof(int)))  

#define make_tmp_mint_from_long(num)\
make_tmp_mint_from_long_in(num,\
  make_tmp_mint(sizeof(long)))

extern mint *make_tmp_mint_in (mint_cell*, unsigned long, mint*);
extern mint *make_tmp_mint_from_int_in (int, mint*);
extern mint *make_tmp_mint_from_long_in (long, mint*);
