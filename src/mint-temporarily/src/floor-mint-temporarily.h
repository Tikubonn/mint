
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
