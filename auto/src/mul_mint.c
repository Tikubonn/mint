#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *mul_mint (mint *numa, mint *numb){
  size_t sizea = size_mint(numa);
  size_t sizeb = size_mint(numb);
  size_t size = max(sizea, sizeb);
  mint *numout = make_mint(size * 2);
  mul_mint_manually(numa, numb, numout);
  return numout;
}
