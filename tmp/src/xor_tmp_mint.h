#pragma once
#include <mint.h>

#define xor_tmp_mint_max(a,b) ((a)<(b)?(b):(a))
#define xor_tmp_mint(var, numa, numb)\
mint *__ ## var ## _xor_argument1 = numa;\
mint *__ ## var ## _xor_argument2 = numb;\
make_tmp_mint(var,\
xor_tmp_mint_max(\
size_mint(__ ## var ## _xor_argument1),\
size_mint(__ ## var ## _xor_argument2)));\
xor_mint_manually(\
__ ## var ## _xor_argument1,\
__ ## var ## _xor_argument2, var);
