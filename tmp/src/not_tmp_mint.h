#pragma once
#include <mint.h>

#define not_tmp_mint(var, num)\
mint *__ ## var ## _not_argument = num;\
make_tmp_mint(var, size_mint(__ ## var ## _not_argument));\
not_mint_manually(__ ## var ## _not_argument, var);