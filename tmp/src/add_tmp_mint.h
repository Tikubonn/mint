#pragma once
#include <mint.h>

#define add_tmp_mint_max(a,b) ((a)<(b)?(b):(a))
#define add_tmp_mint(var, numa, numb)\
mint *__ ## var ## _add_argument1 = numa;\
mint *__ ## var ## _add_argument2 = numb;\
make_tmp_mint(var,\
add_tmp_mint_max(\
size_mint(__ ## var ## _add_argument1),\
size_mint(__ ## var ## _add_argument2)) +1);\
add_mint_manually(\
__ ## var ## _add_argument1,\
__ ## var ## _add_argument2, var);
