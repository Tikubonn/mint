#pragma once
#include <stdint.h>
#include <stddef.h>

typedef uint8_t mint_cell;

typedef struct mint {
  mint_cell *sequence;
	size_t seek;
	size_t size;
} mint;

typedef struct mint_io_buffer {
  char *sequence;
  size_t seek;
  size_t size;
} mint_io_buffer;
