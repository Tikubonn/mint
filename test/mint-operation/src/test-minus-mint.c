#include <test.h>
#include <mint.h>

void test_minus_mint (){
	// minus 0 = 0
	{
		mint *num1 = make_mint_from_int(0);
		test(num1 != NULL);
		mint *num2 = minus_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 0);
		free_mint(num1);
		free_mint(num2);
	}
	// minus 300 = -300
	{
		mint *num1 = make_mint_from_int(300);
		test(num1 != NULL);
		mint *num2 = minus_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -300);
		free_mint(num1);
		free_mint(num2);
	}
	// minus -300 = 300
	{
		mint *num1 = make_mint_from_int(-300);
		test(num1 != NULL);
		mint *num2 = minus_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 300);
		free_mint(num1);
		free_mint(num2);
	}
	// minus 1024 = -1024
	{
		mint *num1 = make_mint_from_int(1024);
		test(num1 != NULL);
		mint *num2 = minus_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -1024);
		free_mint(num1);
		free_mint(num2);
	}
	// minus -1024 = 1024
	{
		mint *num1 = make_mint_from_int(-1024);
		test(num1 != NULL);
		mint *num2 = minus_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 1024);
		free_mint(num1);
		free_mint(num2);
	}
}
