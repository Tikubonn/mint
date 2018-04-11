#include <mint.h>

mint *div_mint (mint *numa, mint *numb){
	mint *numdiv;
	mint *nummod;
	floor_mint(numa, numb, &numdiv, &nummod);
	free_mint(nummod);
	return numdiv;
}
