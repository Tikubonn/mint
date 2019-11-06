#include <test.h>
#include <mint.h>

void test_and_mint (){
	// 0xffff and 0x0000 = 0x0000
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(0x0000);
		test(num2 != NULL);
		mint *num3 = and_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0x0000);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 0xffff and 0xf0f0 = 0xf0f0
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(0xf0f0);
		test(num2 != NULL);
		mint *num3 = and_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xf0f0);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}
