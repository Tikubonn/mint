#include <mint.h>

extern void floor_mint (mint *numa, mint *numb, mint **numdiv, mint **nummod){
	unsigned long size = size_mint(numa);
	*numdiv = make_mint(size);
	*nummod = copy_mint(numa);
	floor_mint_manually(*nummod, numb, *numdiv);
}
