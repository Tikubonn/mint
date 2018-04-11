#include <mint.h>

unsigned long size_mint (mint *numin){
	return (numin->address - numin->address_beginning) / sizeof(mint_cell);
}
