#include <stdio.h>
#include "manual/manual.h"
#include "auto/auto.h"
#include "debug/debug.h"

int main (){

	{
		printf("set\n");
		mint *numa = make_mint_from_int(0);
		set_mint(0xff, 0, 0, numa);
		set_mint(0xff, 2, 0, numa);
		print_mint_ln(numa);
		mint *numb = make_mint_from_int(0);
		set_mint(0xff, 0, 2, numb);
		set_mint(0xff, 2, 2, numb);
		print_mint_ln(numb);
		mint *numc = make_mint_from_int(0);
		set_mint(0xff, 0, 4, numc);
		set_mint(0xff, 2, 4, numc);
		print_mint_ln(numc);
		mint *numd = make_mint_from_int(0);
		set_mint(0xff, 0, 6, numd);
		set_mint(0xff, 2, 6, numd);
		print_mint_ln(numd);
		mint *nume = make_mint_from_int(0);
		set_mint(0xff, 1, 0, nume);
		set_mint(0xff, 3, 0, nume);
		print_mint_ln(nume);
	}
	
	{
		printf("get\n");
		mint *num = make_mint_from_int(0xff00ff00);
		print_mint_cell_ln(get_mint(0, 0, num));
		print_mint_cell_ln(get_mint(0, 2, num));
		print_mint_cell_ln(get_mint(0, 4, num));
		print_mint_cell_ln(get_mint(0, 6, num));
		print_mint_cell_ln(get_mint(1, 0, num));
	}
	
	{
		printf("not\n");
		mint *numa = make_mint_from_int(0);
		mint *numb = not_mint(numa);
		print_mint_ln(numa);
		print_mint_ln(numb);
	}
	
	{ 
		printf("and\n");
		mint *numa = make_mint_from_int(0xf0f0f0f0);
		mint *numb = make_mint_from_int(0xffff0000);
		mint *numc = and_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("or\n");
		mint *numa = make_mint_from_int(0xf0f0f0f0);
		mint *numb = make_mint_from_int(0xffff0000);
		mint *numc = or_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("xor\n");
		mint *numa = make_mint_from_int(0xf0f0f0f0);
		mint *numb = make_mint_from_int(0xffff0000);
		mint *numc = xor_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("+\n");
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(10);
		mint *numc = add_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("-\n");
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(20);
		mint *numc = sub_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("-1 -1\n");
		mint *numa = make_mint_from_int(-1);
		mint *numb = make_mint_from_int(1);
		mint *numc = sub_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("*\n");
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(10);
		mint *numc = mul_mint(numa, numb);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numc);
	}
	
	{
		printf("copy\n");
		mint *numa = make_mint_from_int(10);
		mint *numb = copy_mint(numa);
		print_mint_ln(numa);
		print_mint_ln(numb);
	}
	
	{
		printf("/\n");
		mint *numa = make_mint_from_int(5);
		mint *numb = make_mint_from_int(2);
		mint *numdiv;
		mint *nummod;
		floor_mint(numa, numb, &numdiv, &nummod);
		print_mint_ln(numa);
		print_mint_ln(numb);
		print_mint_ln(numdiv);
		print_mint_ln(nummod);
	}
		
	return 0;
}
