#include <mint.h>

int put_mint_io_buffer (char character, mint_io_buffer *buffer){
  if (buffer->seek < buffer->size){
    buffer->sequence[buffer->seek] = character;
    buffer->seek += 1;
    return 0;
  }
  else {
    if (extend_mint_io_buffer(buffer->size / 2, buffer) != 0){
      return 1;
    }
    return put_mint_io_buffer(character, buffer);
  }
}
