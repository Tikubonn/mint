#include <test.h>
#include <mint.h>

void test_minus_mint_temporarily (){
	// minus 0 = 0
	{
		make_mint_from_int_temporarily(num1, 0);
    test(num1 != NULL);
		minus_mint_temporarily(num2, num1);
    test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 0);
	}
	// minus 300 = -300
	{
		make_mint_from_int_temporarily(num1, 300);
    test(num1 != NULL);
		minus_mint_temporarily(num2, num1);
    test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -300);
	}
	// minus -300 = 300
	{
		make_mint_from_int_temporarily(num1, -300);
    test(num1 != NULL);
		minus_mint_temporarily(num2, num1);
    test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 300);
	}
	// minus 1024 = -1024
	{
		make_mint_from_int_temporarily(num1, 1024);
    test(num1 != NULL);
		minus_mint_temporarily(num2, num1);
    test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == -1024);
	}
	// minus -1024 = 1024
	{
		make_mint_from_int_temporarily(num1, -1024);
    test(num1 != NULL);
		minus_mint_temporarily(num2, num1);
    test(num2 != NULL);
		int casted1 = cast_mint_to_int(num2);
		test(casted1 == 1024);
	}
}
