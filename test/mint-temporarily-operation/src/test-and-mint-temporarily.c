#include <test.h>
#include <mint.h>

void test_and_mint_temporarily (){
	// 0xffff and 0x0000 = 0x0000
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 0x0000);
		and_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0x0000);
	}
	// 0xffff and 0xf0f0 = 0xf0f0
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 0xf0f0);
		and_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xf0f0);
	}
}
