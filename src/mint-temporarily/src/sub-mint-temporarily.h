
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
