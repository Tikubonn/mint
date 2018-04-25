#include <mint.h>
#include <stddef.h>

size_t size_mint (mint *numin){
  return (numin->address - numin->address_beginning) / sizeof(mint_cell);
}

size_t real_size_mint (mint *numin){
  return (numin->address_end - numin->address_beginning) / sizeof(mint_cell);
}
