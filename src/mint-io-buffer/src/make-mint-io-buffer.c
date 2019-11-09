#include <mint.h>
#include <stddef.h>
#include <stdlib.h>

mint_io_buffer *make_mint_io_buffer (size_t size){
  mint_io_buffer *buffer = malloc(sizeof(mint_io_buffer));
  if (buffer == NULL){
    return NULL;
  }
  char *sequence = malloc(sizeof(char) * size);
  if (sequence == NULL){
    free(buffer);
    return NULL;
  }
  init_mint_io_buffer(sequence, size, buffer);
  return buffer;
}
