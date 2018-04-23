#pragma once
#include <mint.h>

#define and_tmp_mint_max(a,b) ((a)<(b)?(b):(a))
#define and_tmp_mint(var, numa, numb)\
mint *__ ## var ## _and_argument1 = numa;\
mint *__ ## var ## _and_argument2 = numb;\
make_tmp_mint(var,\
and_tmp_mint_max(\
size_mint(__ ## var ## _and_argument1),\
size_mint(__ ## var ## _and_argument2)));\
and_mint_manually(\
__ ## var ## _and_argument1,\
__ ## var ## _and_argument2, var);
