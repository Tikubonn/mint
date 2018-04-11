#include <mint.h>
#define max(a, b) (a)<(b)?(b):(a)

int is_lesser_mint_in (mint *numa, mint *numb){
	unsigned long sizea = size_mint(numa);
	unsigned long sizeb = size_mint(numb);
	unsigned long count = max(sizea, sizeb);
	while (count--){
    mint_cell numca = get_mint(count, 0, numa);
    mint_cell numcb = get_mint(count, 0, numb);
		if (numca == 0 && numcb == 0)
			continue;
		if (numca < numcb)
			return 1;
		return 0;
	}
	return 0;
}

int is_lesser_mint (mint *numa, mint *numb){
	if (is_positive_mint(numa)){
		if (is_positive_mint(numb))
			return is_lesser_mint_in(numa, numb);
		return 0; // numa < numb
	}
	else {
		if (is_negative_mint(numb))
			return is_lesser_mint_in(numb, numa);
		return 1; // numa < numb
	}
}
