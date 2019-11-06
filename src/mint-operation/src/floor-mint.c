#include <mint.h>
#include <stddef.h>

extern int floor_mint (mint *number1, mint *number2, mint **numdivp, mint **nummodp){
	if (number1 == NULL){
		return 1;
	}
	if (number2 == NULL){
		return 1;
	}
	size_t size = mint_size(number1);
	mint *numdiv = make_mint(size +1);
	if (numdiv == NULL){
		return 1;
	}
	mint *nummod = make_mint(size +1);
	if (nummod == NULL){
		free_mint(numdiv);
		return 1;
	}
	copy_mint_manually(number1, nummod);
	if (floor_mint_manually(nummod, number2, numdiv)){
		free_mint(numdiv);
		free_mint(nummod);
		return 1;
	}
	else {
		*numdivp = numdiv;
		*nummodp = nummod;
		return 0;
	}
}
