#include <mint.h>

void init_mint (mint_cell *sequence, unsigned long size, mint *numin){
	numin->address = sequence + size;
	numin->address_beginning = sequence;
	numin->address_end = sequence + size;
}
