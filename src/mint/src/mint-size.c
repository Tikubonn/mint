#include <mint.h>
#include <stddef.h>

/*
  mint が使用しているメモリ量を返します。
*/

size_t mint_size (mint *numin){
  return (numin->address - numin->address_beginning) / sizeof(mint_cell);
}

/*
  mint が実際に確保しているメモリ量を返します。
*/

size_t mint_real_size (mint *numin){
  return (numin->address_end - numin->address_beginning) / sizeof(mint_cell);
}
