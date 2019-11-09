#include <test.h>
#include <mint.h>

void test_mod_mint_temporarily (){
	// 300 / 100 = 0
	{
		make_mint_from_int_temporarily(num1, 300);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 100);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
	}
	// 100 / 300 = 100
	{
		make_mint_from_int_temporarily(num1, 100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 300);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 100);
	}
	// 1000 / 300 = 100
	{
		make_mint_from_int_temporarily(num1, 1000);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 300);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 100);
	}
	// 300 / -100 = 0
	{
		make_mint_from_int_temporarily(num1, 300);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, -100);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == 0);
	}
	// 100 / -300 = -100
	{
		make_mint_from_int_temporarily(num1, 100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, -300);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -100);
	}
	// 1000 / -300 = -100
	{
		make_mint_from_int_temporarily(num1, 1000);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, -300);
    test(num2 != NULL);
		mod_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted1 = cast_mint_to_int(num3);
		test(casted1 == -100);
	}
}
