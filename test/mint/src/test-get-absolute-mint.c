#include <test.h>
#include <mint.h>

void test_get_absolute_mint (){
	// 1 => 1
	{
		mint *num1 = make_mint_from_int(1);
		test(num1 != NULL);
		test(get_absolute_mint(0, 0, num1) == 1);
		test(get_absolute_mint(1, 0, num1) == 0);
		test(get_absolute_mint(2, 0, num1) == 0);
		test(get_absolute_mint(3, 0, num1) == 0);
		free_mint(num1);
	}
	// -1 => 1
	{
		mint *num1 = make_mint_from_int(-1);
		test(num1 != NULL);
		test(get_absolute_mint(0, 0, num1) == 1);
		test(get_absolute_mint(1, 0, num1) == 0);
		test(get_absolute_mint(2, 0, num1) == 0);
		test(get_absolute_mint(3, 0, num1) == 0);
		free_mint(num1);
	}
	// 1000 => 1000
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		test(get_absolute_mint(0, 0, num1) == 0xe8);
		test(get_absolute_mint(1, 0, num1) == 0x03);
		test(get_absolute_mint(2, 0, num1) == 0);
		test(get_absolute_mint(3, 0, num1) == 0);
		free_mint(num1);
	}
	// -1000 => 1000
	{
		mint *num1 = make_mint_from_int(-1000);
		test(num1 != NULL);
		test(get_absolute_mint(0, 0, num1) == 0xe8);
		test(get_absolute_mint(1, 0, num1) == 0x03);
		test(get_absolute_mint(2, 0, num1) == 0);
		test(get_absolute_mint(3, 0, num1) == 0);
		free_mint(num1);
	}
	// -1 => 1
	{
		mint *num1 = make_mint_from_int(1);
		test(num1 != NULL);
		test(get_absolute_mint(1, 4, num1) == 0);
		test(get_absolute_mint(2, 4, num1) == 0);
		test(get_absolute_mint(3, 4, num1) == 0);
		free_mint(num1);
	}
	// -1 => 1
	{
		mint *num1 = make_mint_from_int(-1);
		test(num1 != NULL);
		test(get_absolute_mint(1, 4, num1) == 0);
		test(get_absolute_mint(2, 4, num1) == 0);
		test(get_absolute_mint(3, 4, num1) == 0);
		free_mint(num1);
	}
}
