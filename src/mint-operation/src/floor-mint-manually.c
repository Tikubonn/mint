#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define max(a, b) (a)<(b)?(b):(a)

static bool dividablep (mint *numa, size_t offset, size_t seek, mint *numb){
  size_t sizea = mint_size(numa);
  size_t sizeb = mint_size(numb);
  size_t size = max(sizea, sizeb);
  size_t index = size;
  while (0 < index--){
    mint_cell numca = get_absolute_mint(index, 0, numa);
    mint_cell numcb = get_absolute_mint(index + offset, seek, numb);
    if (numca == 0 && numcb == 0){
      continue;
    }
		else
    if (numca <= numcb){
      return true;
    }
		else {
    	return false;
		}
  }
  return false;
}

static void sub (mint *numin, size_t offset, size_t seek, mint *numout){
  size_t size = mint_real_size(numout);
  int carried = 0;
  for (size_t index = 0; index < size; index++){
    mint_cell numcin = get_absolute_mint(index, 0, numin);
    mint_cell numcout = get_absolute_mint(index + offset, seek, numout);
    int numres = numcout - numcin - carried;
    carried = 0xff < numres;
    set_mint(numres, index + offset, seek, numout);
  }
}

static void add (size_t index, size_t seek, mint *numout){
  mint_cell numcout = get_absolute_mint(index, seek, numout);
  set_mint(numcout | 1u, index, seek, numout);
}

static void floor_mint_manually_in (mint *numiomod, mint *numdiv, mint *numoutdiv){
	size_t size = mint_real_size(numiomod);
	size_t index = size;
	while (0 < index--){
		unsigned int seek = 8;
		while (0 < seek--){
			if (dividablep(numdiv, index, seek, numiomod)){
				sub(numdiv, index, seek, numiomod);
				add(index, seek, numoutdiv);
			}
		}
	}
	trim_mint(numiomod);
	trim_mint(numoutdiv);
}

/*
	numiomod / numdiv で割り算を行い
	余剰を numiomod に除数 を numoutdiv に保存します。
*/

int floor_mint_manually (mint *numiomod, mint *numdiv, mint *numoutdiv){
	if (is_zero_mint(numdiv) == false){
		if (is_negative_mint(numiomod) == true){
			if (is_negative_mint(numdiv) == true){
				floor_mint_manually_in(numiomod, numdiv, numoutdiv);
				return 0;
			}
			else {
				floor_mint_manually_in(numiomod, numdiv, numoutdiv);
				minus_mint_manually(numiomod, numiomod);
				minus_mint_manually(numoutdiv, numoutdiv);
				return 0;
			}
		}
		else {
			if (is_negative_mint(numdiv) == true){
				floor_mint_manually_in(numiomod, numdiv, numoutdiv);
				minus_mint_manually(numiomod, numiomod);
				minus_mint_manually(numoutdiv, numoutdiv);
				return 0;
			}
			else {
				floor_mint_manually_in(numiomod, numdiv, numoutdiv);
				return 0;
			}
		}
  }
	return 1; // zero division error!
}
