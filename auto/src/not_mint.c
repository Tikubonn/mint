#include <mint.h>
#include <stddef.h>

mint *not_mint (mint *numin){
  size_t size = size_mint(numin);
  mint *numout = make_mint(size);
  not_mint_manually(numin, numout);
  return numout;
}
