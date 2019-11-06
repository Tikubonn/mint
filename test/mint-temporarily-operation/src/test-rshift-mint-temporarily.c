#include <test.h>
#include <mint.h>

void test_rshift_mint_temporarily (){
	// 0xffff >> 4 = 0xfff
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 4);
		rshift_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xfff);
	}
	// 0xffff >> 8 = 0xff
	{
		make_mint_from_int_temporarily(num1, 0xffff);
		make_mint_from_int_temporarily(num2, 8);
		rshift_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xff);
	}
	// -1 >> 8 = -1
	{
		make_mint_from_int_temporarily(num1, -1);
		make_mint_from_int_temporarily(num2, 8);
		rshift_mint_temporarily(num3, num1, num2);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -1);
	}
}
