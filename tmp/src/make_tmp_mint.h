#pragma once
#include <mint.h>

#define make_tmp_mint(var, size)\
unsigned long __ ## var ## _size = size;\
mint_cell __ ## var ## _data[__ ## var ## _size];\
mint __ ## var;\
mint *var = &__ ## var;\
init_mint(__ ## var ## _data, __ ## var ## _size, var);\
clear_mint(var);
