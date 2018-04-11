#include <stdlib.h>
#include <mint.h>

void free_mint (mint *num){
	free(num->address_beginning);
	free(num);
}
