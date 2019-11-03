#include <stddef.h>

#define lshift_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _lshift_argument1 = numa;\
mint *__ ## var ## _lshift_argument2 = numb;\
size_t __ ## var ## _lshift_seek =\
seek_size_mint(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_offset =\
offset_size_mint(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_size =\
size_mint(__ ## var ## _lshift_argument1);\
make_mint_temporarily(var,\
__ ## var ## _lshift_size +\
__ ## var ## _lshift_offset +\
(__ ## var ## _lshift_seek ? 1 : 0));\
lshift_mint_manually(\
__ ## var ## _lshift_argument1,\
__ ## var ## _lshift_argument2, var);
