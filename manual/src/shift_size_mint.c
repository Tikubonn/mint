#include <mint.h>
#include <stddef.h>

size_t seek_size_mint (mint *num){
  size_t numc = get_mint(0, 0, num);
  return numc & 7u;
}

size_t offset_size_mint (mint *num){
  size_t inum = 0;
  int count = sizeof(size_t);
  while (count--){
    mint_cell numc = get_mint(count, 3u, num);
    inum <<= 8;
    inum = inum | numc;
  }
  return inum;
}
