#include <mint.h>
#include "size_mint.h"

void set_mint (mint_cell numc, unsigned long index, unsigned int seek, mint *numin){
	unsigned int seeka = seek;
	unsigned int seekb = 8 - seek;
	unsigned long size = size_mint(numin);
	if (index < size){
		numin->address_beginning[index] &= ~(0xff << seeka);
		numin->address_beginning[index] |= numc << seeka;
	}
	if (index +1 < size){
		numin->address_beginning[index +1] &= ~(0xff >> seekb);
		numin->address_beginning[index +1] |= numc >> seekb;
	}
}
