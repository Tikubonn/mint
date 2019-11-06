#include <mint.h>
#include <stdlib.h>

void free_mint (mint *number){
	if (number != NULL){
		free(number->sequence);
		free(number);
	}
}
