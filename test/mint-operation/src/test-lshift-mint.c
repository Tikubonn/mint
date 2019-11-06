#include <test.h>
#include <mint.h>

void test_lshift_mint (){
	// 0xffff << 4 = 0xffff0
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(4);
		test(num2 != NULL);
		mint *num3 = lshift_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff0);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 0xffff << 8 = 0xffff00
	{
		mint *num1 = make_mint_from_int(0xffff);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(8);
		test(num2 != NULL);
		mint *num3 = lshift_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff00);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}
