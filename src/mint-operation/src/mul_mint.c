#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *mul_mint (mint *numa, mint *numb){
  size_t sizea = mint_size(numa);
  size_t sizeb = mint_size(numb);
  size_t size = max(sizea, sizeb);
  mint *numout = make_mint(size * 2);
	if (numout == NULL){
    return NULL;
  }
  mul_mint_manually(numa, numb, numout);
  return numout;
}
