#include <test.h>
#include <mint.h>

void test_div_mint_temporarily (){
	// 300 / 100 = 3
	{
		make_mint_from_int_temporarily(num1, 300);
		make_mint_from_int_temporarily(num2, 100);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 3);
	}
	// 100 / 300 = 0
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, 300);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
	}
	// 1000 / 300 = 3
	{
		make_mint_from_int_temporarily(num1, 1000);
		make_mint_from_int_temporarily(num2, 300);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 3);
	}
	// 300 / -100 = -3
	{
		make_mint_from_int_temporarily(num1, 300);
		make_mint_from_int_temporarily(num2, -100);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -3);
	}
	// 100 / -300 = 0
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, -300);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
	}
	// 1000 / -300 = -3
	{
		make_mint_from_int_temporarily(num1, 1000);
		make_mint_from_int_temporarily(num2, -300);
		div_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -3);
	}
}
