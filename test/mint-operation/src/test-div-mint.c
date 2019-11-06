#include <test.h>
#include <mint.h>

void test_div_mint (){
	// 300 / 100 = 3
	{
		mint *num1 = make_mint_from_int(300);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(100);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 3);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 100 / 300 = 0
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(300);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 1000 / 300 = 3
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(300);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 3);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 300 / -100 = -3
	{
		mint *num1 = make_mint_from_int(300);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-100);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -3);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 100 / -300 = 0
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-300);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
	// 1000 / -300 = -3
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-300);
		test(num2 != NULL);
		mint *num3 = div_mint(num1, num2);
		test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -3);
		free_mint(num1);
		free_mint(num2);
		free_mint(num3);
	}
}
