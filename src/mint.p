#pragma once
#include <stdint.h>

typedef uint8_t mint_cell;

typedef struct mint {
  mint_cell *address;
  mint_cell *address_beginning;
  mint_cell *address_end;
} mint;
