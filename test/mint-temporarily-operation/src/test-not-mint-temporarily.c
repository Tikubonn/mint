#include <test.h>
#include <mint.h>

void test_not_mint_temporarily (){
	// not 0 = -1
	{
		make_mint_from_int_temporarily(num1, 0);
		not_mint_temporarily(num2, num1);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -1);
	}
	// not -1 = 0
	{
		make_mint_from_int_temporarily(num1, -1);
		not_mint_temporarily(num2, num1);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 0);
	}
}
