#pragma once
#include <mint.h>

#define mul_tmp_mint(var, numa, numb)\
mint *__ ## var ## _mul_argument1 = numa;\
mint *__ ## var ## _mul_argument2 = numb;\
make_tmp_mint(var,\
size_mint(__ ## var ## _mul_argument1)+\
size_mint(__ ## var ## _mul_argument2)+1);\
mul_mint_manually(\
__ ## var ## _mul_argument1,\
__ ## var ## _mul_argument2, var);
