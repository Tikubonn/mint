#pragma once
#include <mint.h>

#define or_tmp_mint_max(a,b) ((a)<(b)?(b):(a))
#define or_tmp_mint(var, numa, numb)\
mint *__ ## var ## _or_argument1 = numa;\
mint *__ ## var ## _or_argument2 = numb;\
make_tmp_mint(var,\
or_tmp_mint_max(\
size_mint(__ ## var ## _or_argument1),\
size_mint(__ ## var ## _or_argument2)));\
or_mint_manually(\
__ ## var ## _or_argument1,\
__ ## var ## _or_argument2, var);
