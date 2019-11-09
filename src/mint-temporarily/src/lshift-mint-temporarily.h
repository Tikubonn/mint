#include <stddef.h>

#define lshift_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _lshift_argument1 = numa;\
mint *__ ## var ## _lshift_argument2 = numb;\
size_t __ ## var ## _lshift_seek =\
mint_seek_size(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_offset =\
mint_offset_size(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_size =\
mint_size(__ ## var ## _lshift_argument1);\
make_mint_temporarily(var,\
__ ## var ## _lshift_size +\
__ ## var ## _lshift_offset +\
(__ ## var ## _lshift_seek ? 1 : 0));\
if (var != NULL){\
lshift_mint_manually(\
__ ## var ## _lshift_argument1,\
__ ## var ## _lshift_argument2, var);\
}
