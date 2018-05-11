#include <mint.h>
#include <stdlib.h>

mint *div_mint (mint *numa, mint *numb){
	if (numa == NULL) return NULL;
	if (numb == NULL) return NULL;
  mint *numdiv;
  mint *nummod;
  if (floor_mint(numa, numb, &numdiv, &nummod)){
		return NULL;
	}
	else {
		free_mint(nummod);
		return numdiv;		
	}
}
