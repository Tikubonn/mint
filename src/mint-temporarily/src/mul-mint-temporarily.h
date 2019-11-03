#define mul_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _mul_argument1 = numa;\
mint *__ ## var ## _mul_argument2 = numb;\
make_mint_temporarily(var,\
size_mint(__ ## var ## _mul_argument1)+\
size_mint(__ ## var ## _mul_argument2)+1);\
mul_mint_manually(\
__ ## var ## _mul_argument1,\
__ ## var ## _mul_argument2, var);
