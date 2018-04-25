#pragma once
#include <mint.h>
#include <stddef.h>

#define rshift_tmp_mint(var, numa, numb)\
mint *__ ## var ## _rshift_argument1 = numa;\
mint *__ ## var ## _rshift_argument2 = numb;\
size_t __ ## var ## _rshift_seek =\
seek_size_mint(__ ## var ## _rshift_argument2);\
size_t __ ## var ## _rshift_offset =\
offset_size_mint(__ ## var ## _rshift_argument2);\
size_t __ ## var ## _rshift_size =\
size_mint(__ ## var ## _rshift_argument1);\
make_tmp_mint(var,\
__ ## var ## _rshift_size +\
__ ## var ## _rshift_offset);\
rshift_mint_manually(\
__ ## var ## _rshift_argument1,\
__ ## var ## _rshift_argument2, var);
