#include <mint.h>
#include <stdlib.h>

void free_mint_io_buffer (mint_io_buffer *buffer){
  free(buffer->sequence);
  free(buffer);
}
