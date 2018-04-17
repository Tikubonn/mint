#include <mint.h>

int is_zero_mint (mint *num){
	unsigned long size = size_mint(num);
	unsigned long index;
	for (index = 0; index < size; index++){
		mint_cell numc = get_mint(index, 0, num);
		if (numc != 0)
			return 0;
	}
	return 1;
}
