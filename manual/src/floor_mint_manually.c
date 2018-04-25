#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

static inline int floor_mint_manually_dividable (mint *numa, size_t offset, size_t seek, mint *numb){
  // unsigned long sizea = size_mint(numa);
  // unsigned long sizeb = size_mint(numb);
  // unsigned long size = max(sizea, sizeb);
  size_t sizea = size_mint(numa);
  size_t sizeb = size_mint(numb);
  size_t size = max(sizea, sizeb);
  while (size--){
    mint_cell numca = get_mint(size, 0, numa);
    mint_cell numcb = get_mint(size + offset, seek, numb);
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

static inline void floor_mint_manually_sub (mint *numin, size_t offset, size_t seek, mint *numout){
  // unsigned long size = real_size_mint(numout);
  // unsigned long index;
  size_t size = real_size_mint(numout);
  size_t index;
  int car = 0;
  for (index = 0; index < size; index++){
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
  // unsigned long size = real_size_mint(numinmod);
  size_t size = real_size_mint(numinmod);
  while (size--){
    unsigned int seek = 8;
    while (seek--){
      if (floor_mint_manually_dividable(numin, size, seek, numinmod)){
        floor_mint_manually_sub(numin, size, seek, numinmod);
        floor_mint_manually_add(size, seek, numdiv);
      }
    }
  }
  trim_mint(numinmod);
  trim_mint(numdiv);
}

int floor_mint_manually (mint *numinmod, mint *numin, mint *numdiv){
	if (is_zero_mint(numin))
		return 1; // zero division exception!
	floor_mint_manually_in(numinmod, numin, numdiv);
	return 0;
}
