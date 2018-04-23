#pragma once
#include <mint.h>

#define lshift_tmp_mint(var, numa, numb)\
mint *__ ## var ## _lshift_argument1 = numa;\
mint *__ ## var ## _lshift_argument2 = numb;\
unsigned long __ ## var ## _lshift_seek =\
seek_size_mint(__ ## var ## _lshift_argument2);\
unsigned long __ ## var ## _lshift_offset =\
offset_size_mint(__ ## var ## _lshift_argument2);\
unsigned long __ ## var ## _lshift_size =\
size_mint(__ ## var ## _lshift_argument1);\
make_tmp_mint(var,\
__ ## var ## _lshift_size +\
__ ## var ## _lshift_offset +\
(__ ## var ## _lshift_seek ? 1 : 0));\
lshift_mint_manually(\
__ ## var ## _lshift_argument1,\
__ ## var ## _lshift_argument2, var);
