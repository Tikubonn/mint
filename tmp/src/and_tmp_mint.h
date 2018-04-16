#pragma once
#include <mint.h>

#define and_tmp_mint(var, numa, numb)\
mint *__ ## var ## _and_argument1 = numa;\
mint *__ ## var ## _and_argument2 = numb;\
make_tmp_mint(var,\
size_mint(__ ## var ## _and_argument1)<\
size_mint(__ ## var ## _and_argument2)?\
size_mint(__ ## var ## _and_argument2):\
size_mint(__ ## var ## _and_argument1));\
and_mint_manually(\
__ ## var ## _and_argument1,\
__ ## var ## _and_argument2, var);
