#include <mint.h>
#include <stddef.h>
#include <stdlib.h>
#define max(a, b) ((a)<(b)?(b):(a))

int extend_mint_io_buffer (size_t size, mint_io_buffer *buffer){
  size_t newsize = buffer->size + max(1, size);
  char *newsequence = realloc(buffer->sequence, newsize);
  if (newsequence == NULL){
    return 1;
  }
  buffer->sequence = newsequence;
  buffer->size = newsize;
  return 0;
}
