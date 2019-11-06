#include <mint.h>
#include <stddef.h>

static void clear (mint_cell *sequence, size_t size){
	for (size_t index = 0; index < size; index++){
		sequence[index] = 0;
	}
}

void init_mint (mint_cell *sequence, size_t size, mint *numin){
	clear(sequence, size);
	numin->sequence = sequence;
  numin->seek = size;
  numin->size = size;
}
