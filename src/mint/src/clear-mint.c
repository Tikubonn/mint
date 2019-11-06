#include <mint.h>
#include <stddef.h>

void clear_mint (mint *number){
	for (size_t index = 0; index < number->size; index++){
		number->sequence[index] = 0;
	}
}
