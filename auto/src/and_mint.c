#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *and_mint (mint *numa, mint *numb){
	if (numa == NULL) return NULL;
	if (numb == NULL) return NULL;
  size_t sizea = size_mint(numa);
  size_t sizeb = size_mint(numb);
  size_t size = max(sizea, sizeb);
  mint *numout = make_mint(size);
	if (numout == NULL) return NULL;
  and_mint_manually(numa, numb, numout);
  return numout;
}
