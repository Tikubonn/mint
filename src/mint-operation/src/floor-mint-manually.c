#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

static int floor_mint_manually_dividable (mint *numa, size_t offset, size_t seek, mint *numb){
  size_t sizea = mint_size(numa);
  size_t sizeb = mint_size(numb);
  size_t size = max(sizea, sizeb);
  size_t index = size;
  while (0 < index--){
    mint_cell numca = get_mint(index, 0, numa);
    mint_cell numcb = get_mint(index + offset, seek, numb);
    if (numca == 0 && numcb == 0){
      continue;
    }
    if (numca <= numcb){
      return 1;
    }
    return 0;
  }
  return 0;
}

static void floor_mint_manually_sub (mint *numin, size_t offset, size_t seek, mint *numout){
  size_t size = mint_real_size(numout);
  int car = 0;
  for (size_t index = 0; index < size; index++){
    mint_cell numcin = get_mint(index, 0, numin);
    mint_cell numcout = get_mint(index + offset, seek, numout);
    int numres = numcout - numcin - car;
    car = 0xff < (unsigned int)numres;
    set_mint(numres, index + offset, seek, numout);
  }
}

static void floor_mint_manually_add (size_t index, size_t seek, mint *numout){
  mint_cell numcout = get_mint(index, seek, numout);
  set_mint(numcout | 1u, index, seek, numout);
}

static void floor_mint_manually_in (mint *numinmod, mint *numin, mint *numdiv){
  size_t size = mint_real_size(numinmod);
  size_t index = size;
  while (0 < index--){
    unsigned int seek = 8;
    while (0 < seek--){
      if (floor_mint_manually_dividable(numin, index, seek, numinmod)){
        floor_mint_manually_sub(numin, index, seek, numinmod);
        floor_mint_manually_add(index, seek, numdiv);
      }
    }
  }
  trim_mint(numinmod);
  trim_mint(numdiv);
}

int floor_mint_manually (mint *numinmod, mint *numin, mint *numdiv){
	if (is_zero_mint(numin)){
		return 1; // zero division exception!
  }
	floor_mint_manually_in(numinmod, numin, numdiv);
	return 0;
}
