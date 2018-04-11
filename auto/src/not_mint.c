#include <mint.h>

mint *not_mint (mint *numin){
  unsigned long size = size_mint(numin);
  mint *numout = make_mint(size);
  not_mint_manually(numin, numout);
  return numout;
}
