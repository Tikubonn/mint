#include <mint.h>
#include "size_mint.h"

mint_cell get_mint (unsigned long index, unsigned int seek, mint *numin){
	mint_cell numc = 0;
	unsigned int seeka = seek;
	unsigned int seekb = 8 - seek;
	unsigned long size = size_mint(numin);
	if (index < size){
		numc &= ~(0xff >> seeka);
		numc |= numin->address_beginning[index] >> seeka;
	}
	if (index +1 < size){
		numc &= ~(0xff << seekb);
		numc |= numin->address_beginning[index +1] << seekb;
	}
	return numc;
}
