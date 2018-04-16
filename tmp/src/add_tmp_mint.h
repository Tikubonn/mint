#pragma once
#include <mint.h>

#define add_tmp_mint(var, numa, numb)\
mint *__ ## var ## _add_argument1 = numa;\
mint *__ ## var ## _add_argument2 = numb;\
make_tmp_mint(var,\
size_mint(__ ## var ## _add_argument1)<\
size_mint(__ ## var ## _add_argument2)?\
size_mint(__ ## var ## _add_argument2):\
size_mint(__ ## var ## _add_argument1));\
add_mint_manually(\
__ ## var ## _add_argument1,\
__ ## var ## _add_argument2, var);
