#include <mint.h>

unsigned long seek_size_mint (mint *num){
  unsigned long inum = 0;
  unsigned long count = sizeof(long);
  while (count--){
    mint_cell numc = get_mint(count, 0, num);
    inum <<= 8;
    inum = inum | numc;
  }
  return inum;
}

unsigned long offset_size_mint (mint *num){
  unsigned long inum = 0;
  unsigned long count = sizeof(long);
  while (count--){
    mint_cell numc = get_mint(count + sizeof(long), 0, num);
    inum <<= 8;
    inum = inum | numc;
  }
  return inum;
}
