#include <mint.h>
#include <stddef.h>

/*
  シフト演算で使われるバイト単位のずらし幅を返します。
*/

size_t mint_seek_size (mint *num){
  size_t numc = get_mint(0, 0, num);
  return numc & 7u;
}

/*
  シフト演算で使われるビット単位のずらし幅を返します。
*/

size_t mint_offset_size (mint *num){
  size_t inum = 0;
  size_t index = sizeof(size_t);
  while (0 < index--){
    mint_cell numc = get_mint(index, 3u, num);
    inum <<= 8;
    inum = inum | numc;
  }
  return inum;
}
