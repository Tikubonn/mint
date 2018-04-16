#pragma once
#include <mint.h>

#define div_tmp_mint(var ,numa, numb)\
floor_tmp_mint(__ ## var ## __unused, var, numa, numb);
