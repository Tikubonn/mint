
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
