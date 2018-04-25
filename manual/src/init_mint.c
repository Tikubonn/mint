#include <mint.h>
#include <stddef.h>

void init_mint (mint_cell *sequence, size_t size, mint *numin){
  numin->address = sequence + size;
  numin->address_beginning = sequence;
  numin->address_end = sequence + size;
}
