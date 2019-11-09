#include <stddef.h>

#define rshift_mint_temporarily_max(a, b)\
((a)<(b)?(b):(a))

#define rshift_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _rshift_argument1 = numa;\
mint *__ ## var ## _rshift_argument2 = numb;\
size_t __ ## var ## _rshift_offset =\
mint_offset_size(__ ## var ## _rshift_argument2);\
size_t __ ## var ## _rshift_size =\
mint_size(__ ## var ## _rshift_argument1);\
make_mint_temporarily(var,\
rshift_mint_temporarily_max(\
1,\
__ ## var ## _rshift_size -\
__ ## var ## _rshift_offset));\
if (var != NULL){\
rshift_mint_manually(\
__ ## var ## _rshift_argument1,\
__ ## var ## _rshift_argument2, var);\
}
