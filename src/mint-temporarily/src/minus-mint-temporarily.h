#define minus_mint_temporarily(var, num)\
mint *__ ## var ## _minus_argument = num;\
make_mint_temporarily(var, mint_size(__ ## var ## _minus_argument) +1);\
minus_mint_manually(__ ## var ## _minus_argument, var);
