#include <mint.h>
#include <stddef.h>

/*
  mint が使用しているメモリ量を返します。
*/

size_t mint_size (mint *number){
  return number->seek;
}

/*
  mint が実際に確保しているメモリ量を返します。
*/

size_t mint_real_size (mint *number){
	return number->size;
}
