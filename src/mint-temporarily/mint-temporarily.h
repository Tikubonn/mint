#define add_mint_temporarily_max(a,b)\
((a)<(b)?(b):(a))

#define add_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _add_argument1 = numa;\
mint *__ ## var ## _add_argument2 = numb;\
make_mint_temporarily(var,\
add_mint_temporarily_max(\
mint_size(__ ## var ## _add_argument1),\
mint_size(__ ## var ## _add_argument2)) +1);\
if (var != NULL){\
add_mint_manually(\
__ ## var ## _add_argument1,\
__ ## var ## _add_argument2, var);\
}
#define and_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define and_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _and_argument1 = numa;\
mint *__ ## var ## _and_argument2 = numb;\
make_mint_temporarily(var,\
and_mint_temporarily_max(\
mint_size(__ ## var ## _and_argument1),\
mint_size(__ ## var ## _and_argument2)));\
if (var != NULL){\
and_mint_manually(\
__ ## var ## _and_argument1,\
__ ## var ## _and_argument2, var);\
}
#define copy_mint_temporarily(var, num)\
mint *__ ## var ## _copy_argument = num;\
make_mint_temporarily(var, mint_size(__ ## var ## _copy_argument));\
if (var != NULL){\
copy_mint_manually(__ ## var ## _copy_argument, var);\
}
#define div_mint_temporarily(var ,numa, numb)\
floor_mint_temporarily(var, __ ## var ## __unused, numa, numb);

#define floor_mint_temporarily(var1, var2, numa, numb)\
mint *__ ## var1 ## _floor_argument1 = numa;\
mint *__ ## var1 ## _floor_argument2 = numb;\
make_mint_temporarily(var1, mint_size(__ ## var1 ## _floor_argument1));\
copy_mint_temporarily(var2, __ ## var1 ## _floor_argument1);\
if (var1 == NULL || var2 == NULL){\
var1 = NULL;\
var2 = NULL;\
}\
else {\
if (floor_mint_manually(var2, __ ## var1 ## _floor_argument2, var1) != 0){\
var1 = NULL;\
var2 = NULL;\
}\
}
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
#define mod_mint_temporarily(var ,numa, numb)\
floor_mint_temporarily(__ ## var ## _unused, var, numa, numb);
#define mul_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _mul_argument1 = numa;\
mint *__ ## var ## _mul_argument2 = numb;\
make_mint_temporarily(var,\
mint_size(__ ## var ## _mul_argument1)+\
mint_size(__ ## var ## _mul_argument2)+1);\
if (var != NULL){\
mul_mint_manually(\
__ ## var ## _mul_argument1,\
__ ## var ## _mul_argument2, var);\
}
#define not_mint_temporarily(var, num)\
mint *__ ## var ## _not_argument = num;\
make_mint_temporarily(var, mint_size(__ ## var ## _not_argument));\
if (var != NULL){\
not_mint_manually(__ ## var ## _not_argument, var);\
}

#define or_mint_temporarily_max(a,b)\
((a)<(b)?(b):(a))

#define or_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _or_argument1 = numa;\
mint *__ ## var ## _or_argument2 = numb;\
make_mint_temporarily(var,\
or_mint_temporarily_max(\
mint_size(__ ## var ## _or_argument1),\
mint_size(__ ## var ## _or_argument2)));\
if (var != NULL){\
or_mint_manually(\
__ ## var ## _or_argument1,\
__ ## var ## _or_argument2, var);\
}
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

#define sub_mint_temporarily_max(a, b)\
((a)<(b)?(b):(a))

#define sub_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _sub_argument1 = numa;\
mint *__ ## var ## _sub_argument2 = numb;\
make_mint_temporarily(var,\
sub_mint_temporarily_max(\
mint_size(__ ## var ## _sub_argument1),\
mint_size(__ ## var ## _sub_argument2)) +1);\
if (var != NULL){\
sub_mint_manually(\
__ ## var ## _sub_argument1,\
__ ## var ## _sub_argument2, var);\
}

#define xor_mint_temporarily_max(a, b)\
((a)<(b)?(b):(a))

#define xor_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _xor_argument1 = numa;\
mint *__ ## var ## _xor_argument2 = numb;\
make_mint_temporarily(var,\
xor_mint_temporarily_max(\
mint_size(__ ## var ## _xor_argument1),\
mint_size(__ ## var ## _xor_argument2)));\
if (var != NULL){\
xor_mint_manually(\
__ ## var ## _xor_argument1,\
__ ## var ## _xor_argument2, var);\
}
#define minus_mint_temporarily(var, num)\
mint *__ ## var ## _minus_argument = num;\
make_mint_temporarily(var, mint_size(__ ## var ## _minus_argument) +1);\
if (var != NULL){\
minus_mint_manually(__ ## var ## _minus_argument, var);\
}
