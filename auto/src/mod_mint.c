#include <mint.h>
#include <stdlib.h>

/* mint *mod_mint (mint *numa, mint *numb){
  mint *numdiv;
  mint *nummod;
  floor_mint(numa, numb, &numdiv, &nummod);
  free_mint(numdiv);
  return nummod;
} */

mint *mod_mint (mint *numa, mint *numb){
	mint *numdiv;
	mint *nummod;
	if (floor_mint(numa, numb, &numdiv, &nummod)){
		return NULL;
	}
	else {
		free_mint(numdiv);
		return nummod;
	}
}
