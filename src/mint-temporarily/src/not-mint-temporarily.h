#define not_mint_temporarily(var, num)\
mint *__ ## var ## _not_argument = num;\
make_mint_temporarily(var, size_mint(__ ## var ## _not_argument));\
not_mint_manually(__ ## var ## _not_argument, var);
