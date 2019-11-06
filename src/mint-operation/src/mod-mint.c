#include <mint.h>
#include <stdlib.h>

mint *mod_mint (mint *number1, mint *number2){
	mint *numdiv;
	mint *nummod;
	if (floor_mint(number1, number2, &numdiv, &nummod)){
		return NULL;
	}
	else {
		free_mint(numdiv);
		return nummod;
	}
}
