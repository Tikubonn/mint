#pragma once
#include <stdint.h>

typedef uint8_t mint_cell;

struct mint {
	mint_cell *address;
	mint_cell *address_beginning;
	mint_cell *address_end;
};

typedef struct mint mint;
