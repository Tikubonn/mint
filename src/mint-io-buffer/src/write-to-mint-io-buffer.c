#include <mint.h>
#include <stddef.h>
#include <stdio.h>

size_t write_to_mint_io_buffer (mint_io_buffer *buffer, FILE *file){
  size_t wrotesize = 0;
  for (size_t index = buffer->seek; 0 < index--;){
    if (putc(buffer->sequence[index], file) == EOF){
      return wrotesize;
    }
    wrotesize += 1;
  }
  return wrotesize;
}
