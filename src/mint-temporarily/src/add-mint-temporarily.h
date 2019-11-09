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
