#include <mint.h>
#include <stddef.h>

extern mint *copy_mint (mint *numin){
  // unsigned long size = size_mint(numin);
  size_t size = size_mint(numin);
  mint *num = make_mint(size);
  copy_mint_manually(numin, num);
  return num;
}
