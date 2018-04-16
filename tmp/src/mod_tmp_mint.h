#pragma once
#include <mint.h>

#define mod_tmp_mint(var ,numa, numb)\
floor_tmp_mint(var, __ ## var ## _unused, numa, numb);
