#include <stdio.h>
#include <mint.h>

void print_mint_cell (mint_cell numc){
	unsigned int seek = 8;
	while (seek--){
		putchar((numc & (1u << seek)) ? '1' : '0');
	}
}

void print_mint_cell_ln (mint_cell numc){
	print_mint_cell(numc);
	putchar('\n');
}

void print_mint (mint *numin){
	mint_cell *addressnum = numin->address_end;
	while (numin->address_beginning < addressnum--){
		print_mint_cell(*addressnum);
	}
}

void print_mint_ln (mint *numin){
	print_mint(numin);
	putchar('\n');
}
