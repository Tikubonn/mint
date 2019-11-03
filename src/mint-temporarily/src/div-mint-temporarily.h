#define div_mint_temporarily(var ,numa, numb)\
floor_mint_temporarily(var, __ ## var ## __unused, numa, numb);
