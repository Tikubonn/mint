#include <mint.h>
#include <stdio.h>

void load_mint_from_int (int num, mint *numout){
	char *addressnum = (char*)&num;
	int size = sizeof(int);
	while (size--){
		set_mint(addressnum[size], size, 0, numout);
	}
}

void load_mint_from_long (long num, mint *numout){
	char *addressnum = (char*)&num;
	int size = sizeof(long);
	while (size--){
		set_mint(addressnum[size], size, 0, numout);
	}
}
