#include <test.h>
#include <mint.h>

void test_not_mint (){
	// not 0 = -1
	{
		mint *num1 = make_mint_from_int(0);
		test(num1 != NULL);
		mint *num2 = not_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -1);
	}
	// not -1 = 0
	{
		mint *num1 = make_mint_from_int(-1);
		test(num1 != NULL);
		mint *num2 = not_mint(num1);
		test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 0);
	}
}
