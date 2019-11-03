#define xor_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define xor_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _xor_argument1 = numa;\
mint *__ ## var ## _xor_argument2 = numb;\
make_mint_temporarily(var,\
xor_mint_temporarily_max(\
size_mint(__ ## var ## _xor_argument1),\
size_mint(__ ## var ## _xor_argument2)));\
xor_mint_manually(\
__ ## var ## _xor_argument1,\
__ ## var ## _xor_argument2, var);
