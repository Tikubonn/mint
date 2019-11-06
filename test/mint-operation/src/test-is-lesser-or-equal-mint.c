#include <test.h>
#include <mint.h>

void test_is_lesser_or_equal_mint (){
	// 1000 <= 1000 = true
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(1000);
		test(num2 != NULL);
		test(is_lesser_or_equal_mint(num1, num2) == true);
		free_mint(num1);
		free_mint(num2);
	}
	// 2000 <= 1000 = false
	{
		mint *num1 = make_mint_from_int(2000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(1000);
		test(num2 != NULL);
		test(is_lesser_or_equal_mint(num1, num2) == false);
		free_mint(num1);
		free_mint(num2);
	}
	// 1000 <= 2000 = false
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(2000);
		test(num2 != NULL);
		test(is_lesser_or_equal_mint(num1, num2) == true);
		free_mint(num1);
		free_mint(num2);
	}
	// 2000 <= 2000 = true
	{
		mint *num1 = make_mint_from_int(2000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(2000);
		test(num2 != NULL);
		test(is_lesser_or_equal_mint(num1, num2) == true);
		free_mint(num1);
		free_mint(num2);
	}
}
