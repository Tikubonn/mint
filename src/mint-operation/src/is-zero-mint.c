#include <mint.h>
#include <stddef.h>
#include <stdbool.h>

bool is_zero_mint (mint *num){
	size_t size = mint_size(num);
	for (size_t index = 0; index < size; index++){
		mint_cell numc = get_mint(index, 0, num);
		if (numc != 0){
      return false;
    }
	}
	return true;
}
