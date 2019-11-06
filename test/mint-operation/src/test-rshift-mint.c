#include <test.h>
#include <mint.h>

void test_rshift_mint (){
	// 0xffff >> 4 = 0xfff
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(4);
		test(num2 != NULL);
		mint *num3 = rshift_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xfff);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 0xffff >> 8 = 0xff
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(8);
		test(num2 != NULL);
		mint *num3 = rshift_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xff);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// -1 >> 8 = -1
	{
		mint *num1 = make_mint_from_int(-1);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(8);
		test(num2 != NULL);
		mint *num3 = rshift_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -1);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}
