#include <mint.h>
#include <stddef.h>

extern int floor_mint (mint *numa, mint *numb, mint **numdiv, mint **nummod){
	// unsigned long size = size_mint(numa);
	size_t size = size_mint(numa);
	mint *numd = make_mint(size);
	mint *numm = copy_mint(numa);
	if (floor_mint_manually(numm, numb, numd)){
		free_mint(numd);
		free_mint(numm);
		return 1;
	}
	else {
		*numdiv = numd;
		*nummod = numm;
		return 0;
	}
}
