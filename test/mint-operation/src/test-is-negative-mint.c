#include <test.h>
#include <mint.h>

void test_is_negative_mint (){
	// is-negative 1000 = false
	{
		mint *num1 = make_mint_from_int(-1000);
		test(num1 != NULL);
		test(is_negative_mint(num1) == true);
		free_mint(num1);
	}
	// is-negative 0 = true
	{
		mint *num1 = make_mint_from_int(0);
		test(num1 != NULL);
		test(is_negative_mint(num1) == false);
		free_mint(num1);
	}
	// is-negative 1000 = false
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		test(is_negative_mint(num1) == false);
		free_mint(num1);
	}
}
