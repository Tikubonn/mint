#include <test.h>
#include <mint.h>

void test_mul_mint_temporarily (){
	// 100 * 200 = 20000
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, 200);
		mul_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == 20000);
	}
	// 100 * (-200) = -20000
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, -200);
		mul_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == -20000);
	}
	// (-100) * 200 = -20000
	{
		make_mint_from_int_temporarily(num1, -100);
		make_mint_from_int_temporarily(num2, 200);
		mul_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == -20000);
	}
	// (-100) * (-200) = 20000
	{
		make_mint_from_int_temporarily(num1, -100);
		make_mint_from_int_temporarily(num2, -200);
		mul_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == 20000);
	}
}
