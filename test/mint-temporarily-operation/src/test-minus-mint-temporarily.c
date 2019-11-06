#include <test.h>
#include <mint.h>

void test_minus_mint_temporarily (){
	// minus 300 = -300
	{
		make_mint_from_int_temporarily(num1, 300);
		minus_mint_temporarily(num2, num1);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -300);
	}
	// minus -300 = 300
	{
		make_mint_from_int_temporarily(num1, -300);
		minus_mint_temporarily(num2, num1);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 300);
	}
}
