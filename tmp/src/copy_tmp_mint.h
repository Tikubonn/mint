#pragma once
#include <mint.h>

#define copy_tmp_mint(var, num)\
mint *__ ## var ## _copy_argument = num;\
make_tmp_mint(var, size_mint(__ ## var ## _copy_argument));\
copy_mint_manually(var, __ ## var ## _copy_argument);
