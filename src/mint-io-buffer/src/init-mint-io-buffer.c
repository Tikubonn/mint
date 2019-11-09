#include <mint.h>
#include <stddef.h>

void init_mint_io_buffer (char *sequence, size_t size, mint_io_buffer *buffer){
  buffer->sequence = sequence;
  buffer->seek = 0;
  buffer->size = size;
}
