#pragma once
#include <mint.h>

#define sub_tmp_mint(var, numa, numb)\
mint *__ ## var ## _sub_argument1 = numa;\
mint *__ ## var ## _sub_argument2 = numb;\
make_tmp_mint(var,\
size_mint(__ ## var ## _sub_argument1)<\
size_mint(__ ## var ## _sub_argument2)?\
size_mint(__ ## var ## _sub_argument2)+1:\
size_mint(__ ## var ## _sub_argument1)+1);\
sub_mint_manually(\
__ ## var ## _sub_argument1,\
__ ## var ## _sub_argument2, var);
