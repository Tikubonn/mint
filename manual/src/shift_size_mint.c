#include <mint.h>

unsigned long seek_size_mint (mint *num){
  unsigned long numc = get_mint(0, 0, num);
  return numc & 7u;
}

unsigned long offset_size_mint (mint *num){
  unsigned long inum = 0;
  int count = sizeof(long);
  while (count--){
    mint_cell numc = get_mint(count, 3u, num);
    inum <<= 8;
    inum = inum | numc;
  }
  return inum;
}
