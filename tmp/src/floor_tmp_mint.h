#pragma once
#include <mint.h>

#define floor_tmp_mint(var1, var2, numa, numb)\
mint *__ ## var1 ## _floor_argument1 = numa;\
mint *__ ## var1 ## _floor_argument2 = numb;\
copy_tmp_mint(var1, __ ## var1 ## _floor_argument1);\
make_tmp_mint(var2, size_mint(__ ## var1 ## _floor_argument1));\
floor_mint_manually(var1, __ ## var1 ## _floor_argument2, var2);
