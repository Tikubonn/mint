#include <test.h>
#include <mint.h>

void test_add_mint_temporarily (){
	// 100 + 200 = 300
	{
		make_mint_from_int_temporarily(num1, 100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 200);
    test(num2 != NULL);
		add_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 300);
	}
	// 100 + (-200) = -100
	{
		make_mint_from_int_temporarily(num1, 100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, -200);
    test(num2 != NULL);
		add_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -100);
	}
	// (-100) + 200 = 100
	{
		make_mint_from_int_temporarily(num1, -100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, 200);
    test(num2 != NULL);
		add_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == 100);
	}
	// (-100) + (-200) = -300
	{
		make_mint_from_int_temporarily(num1, -100);
    test(num1 != NULL);
		make_mint_from_int_temporarily(num2, -200);
    test(num2 != NULL);
		add_mint_temporarily(num3, num1, num2);
    test(num3 != NULL);
		int casted = cast_mint_to_int(num3);
		test(casted == -300);
	}
}
