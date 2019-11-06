#include <test.h>
#include <mint.h>

void test_mul_mint (){
	// 100 * 200 = 20000
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(200);
		test(num2 != NULL);
		mint *num3 = mul_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 20000);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 100 * (-200) = -20000
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-200);
		test(num2 != NULL);
		mint *num3 = mul_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -20000);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// (-100) * 200 = -20000
	{
		mint *num1 = make_mint_from_int(-100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(200);
		test(num2 != NULL);
		mint *num3 = mul_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -20000);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// (-100) * (-200) = 20000
	{
		mint *num1 = make_mint_from_int(-100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-200);
		test(num2 != NULL);
		mint *num3 = mul_mint(num1, num2);
		test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 20000);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}