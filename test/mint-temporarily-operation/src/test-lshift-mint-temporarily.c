#include <test.h>
#include <mint.h>

void test_lshift_mint_temporarily (){
	// 0xffff << 4 = 0xffff0
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 4);
		lshift_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff0);
	}
	// 0xffff << 8 = 0xffff00
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 8);
		lshift_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff00);
	}
}
