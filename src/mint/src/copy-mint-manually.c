#include <mint.h>
#include <stddef.h>
#define min(a, b) ((a)<(b)?(a):(b))

void copy_mint_manually (mint *numin, mint *numout){
	size_t size = mint_real_size(numout);
	for (size_t index = 0; index < size; index++){
		mint_cell value = get_mint(index, 0, numin);
		set_mint(value, index, 0, numout);
	}
	trim_mint(numout);
}
