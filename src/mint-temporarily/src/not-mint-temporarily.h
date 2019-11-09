#define not_mint_temporarily(var, num)\
mint *__ ## var ## _not_argument = num;\
make_mint_temporarily(var, mint_size(__ ## var ## _not_argument));\
if (var != NULL){\
not_mint_manually(__ ## var ## _not_argument, var);\
}
