#include <test.h>
#include <mint.h>

void test_sub_mint (){
	// 100 - 200 = -100
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(200);
		test(num2 != NULL);
		mint *num3 = sub_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -100);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 100 - (-200) = 300
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-200);
		test(num2 != NULL);
		mint *num3 = sub_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 300);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// (-100) - 200 = -300
	{
		mint *num1 = make_mint_from_int(-100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(200);
		test(num2 != NULL);
		mint *num3 = sub_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -300);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// (-100) - (-200) = 100
	{
		mint *num1 = make_mint_from_int(-100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-200);
		test(num2 != NULL);
		mint *num3 = sub_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 100);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}
