#define or_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define or_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _or_argument1 = numa;\
mint *__ ## var ## _or_argument2 = numb;\
make_mint_temporarily(var,\
or_mint_temporarily_max(\
size_mint(__ ## var ## _or_argument1),\
size_mint(__ ## var ## _or_argument2)));\
or_mint_manually(\
__ ## var ## _or_argument1,\
__ ## var ## _or_argument2, var);
