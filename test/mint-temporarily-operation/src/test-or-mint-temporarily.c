#include <test.h>
#include <mint.h>

void test_or_mint_temporarily (){
	// 0xffff or 0x0000 = 0xffff
	{
		make_mint_from_int_temporarily(num1, 0xffff);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 0x0000);
    test(num2 != NULL);
		or_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff);
	}
	// 0xffff or 0xf0f0 = 0xffff
	{
		make_mint_from_int_temporarily(num1, 0xffff);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 0xf0f0);
    test(num2 != NULL);
		or_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0xffff);
	}
}
