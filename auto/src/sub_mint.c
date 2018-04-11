#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

mint *sub_mint (mint *numa, mint *numb){
	unsigned long sizea = size_mint(numa);
	unsigned long sizeb = size_mint(numb);
	unsigned long size = max(sizea, sizeb);
	mint *numout = make_mint(size +1);
	sub_mint_manually(numa, numb, numout);
	return numout;
}
