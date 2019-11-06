#define and_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define and_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _and_argument1 = numa;\
mint *__ ## var ## _and_argument2 = numb;\
make_mint_temporarily(var,\
and_mint_temporarily_max(\
mint_size(__ ## var ## _and_argument1),\
mint_size(__ ## var ## _and_argument2)));\
and_mint_manually(\
__ ## var ## _and_argument1,\
__ ## var ## _and_argument2, var);
