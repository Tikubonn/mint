#include <mint.h>

mint *mod_mint (mint *numa, mint *numb){
	mint *numdiv;
	mint *nummod;
	floor_mint(numa, numb, &numdiv, &nummod);
	free_mint(numdiv);
	return nummod;
}
