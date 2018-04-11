#include <mint.h>

void copy_mint_manually (mint *numin, mint *numout){
	unsigned long size = size_mint(numout);
	unsigned long index;
	for (index = 0; index < size; index++){
		mint_cell numc = get_mint(index, 0, numin);
		set_mint(numc, index, 0, numout);
	}
}
