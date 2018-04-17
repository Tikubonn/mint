#include <mint.h>

unsigned long size_mint (mint *numin){
  return (numin->address - numin->address_beginning) / sizeof(mint_cell);
}

unsigned long real_size_mint (mint *numin){
  return (numin->address_end - numin->address_beginning) / sizeof(mint_cell);
}
