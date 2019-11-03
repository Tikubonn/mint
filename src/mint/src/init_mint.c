#include <mint.h>
#include <stddef.h>

void clear (mint_cell *sequence, size_t size){
	for (size_t index = 0; index < size; index++){
		sequence[index] = 0;
	}
}

void init_mint (mint_cell *sequence, size_t size, mint *numin){
	clear(sequence, size);
	numin->address = sequence;
  numin->address_beginning = sequence;
  numin->address_end = sequence + size;
}
