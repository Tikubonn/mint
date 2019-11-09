#include <mint.h>
#include <stddef.h>

static void clear (mint_cell *sequence, size_t size){
	for (size_t index = 0; index < size; index++){
		sequence[index] = 0;
	}
}

int init_mint (mint_cell *sequence, size_t size, mint *numin){
  if (0 < size){
    clear(sequence, size);
    numin->sequence = sequence;
    numin->seek = size;
    numin->size = size;
    return 0;
  }
  return 1;
}
