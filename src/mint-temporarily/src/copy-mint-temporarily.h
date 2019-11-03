#define copy_mint_temporarily(var, num)\
mint *__ ## var ## _copy_argument = num;\
make_mint_temporarily(var, size_mint(__ ## var ## _copy_argument));\
copy_mint_manually(__ ## var ## _copy_argument, var);
