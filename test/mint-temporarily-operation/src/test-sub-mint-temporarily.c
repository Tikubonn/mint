#include <test.h>
#include <mint.h>

void test_sub_mint_temporarily (){
	// 100 - 200 = -100
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, 200);
		sub_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == -100);
	}
	// 100 - (-200) = 300
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, -200);
		sub_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == 300);
	}
	// (-100) - 200 = -300
	{
		make_mint_from_int_temporarily(num1, -100);
		make_mint_from_int_temporarily(num2, 200);
		sub_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == -300);
	}
	// (-100) - (-200) = 100
	{
		make_mint_from_int_temporarily(num1, -100);
		make_mint_from_int_temporarily(num2, -200);
		sub_mint_temporarily(num3, num1, num2);
		int casted = cast_mint_to_int(num3);
		test(casted == 100);
	}
}
