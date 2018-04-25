#pragma once
#include <mint.h>
#include <stddef.h>

#define make_tmp_mint(var, size)\
size_t __ ## var ## _size = size;\
mint_cell __ ## var ## _data[__ ## var ## _size];\
mint __ ## var;\
mint *var = &__ ## var;\
init_mint(__ ## var ## _data, __ ## var ## _size, var);\
clear_mint(var);

#define make_tmp_mint_from_int(var, num)\
make_tmp_mint(var, sizeof(int));\
load_mint_from_int(num, var);

#define make_tmp_mint_from_long(var, num)\
make_tmp_mint(var, sizeof(long));\
load_mint_from_long(num, var);
