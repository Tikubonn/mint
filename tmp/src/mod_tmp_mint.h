#pragma once
#include <mint.h>

#define mod_tmp_mint(var ,numa, numb)\
floor_tmp_mint(__ ## var ## _unused, var, numa, numb);
