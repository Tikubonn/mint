#include <stddef.h>

#define make_mint_temporarily(var, size)\
size_t __ ## var ## _size = size;\
mint_cell __ ## var ## _data[__ ## var ## _size];\
mint __ ## var;\
mint *var = &__ ## var;\
if (init_mint(__ ## var ## _data, __ ## var ## _size, var) != 0){\
var = NULL;\
}

#define make_mint_from_int_temporarily(var, num)\
make_mint_temporarily(var, sizeof(int));\
if (var != NULL){\
load_mint_from_int(num, var);\
}

#define make_mint_from_long_temporarily(var, num)\
make_mint_temporarily(var, sizeof(long));\
if (var != NULL){\
load_mint_from_long(num, var);\
}
