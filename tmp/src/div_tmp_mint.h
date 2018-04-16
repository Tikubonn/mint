#pragma once
#include <mint.h>

#define div_tmp_mint(var ,numa, numb)\
floor_tmp_mint(var, __ ## var ## __unused, numa, numb);
