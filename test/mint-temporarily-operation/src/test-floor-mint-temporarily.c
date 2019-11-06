#include <test.h>
#include <mint.h>

void test_floor_mint_temporarily (){
	// 300 floor 100 = 3, 0
	{
		make_mint_from_int_temporarily(num1, 300);
		make_mint_from_int_temporarily(num2, 100);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 3);
		test(castedmod == 0);
	}
	// 100 floor 300 = 0, 100
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, 300);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 0);
		test(castedmod == 100);
	}
	// 1000 floor 300 = 3, 100
	{
		make_mint_from_int_temporarily(num1, 1000);
		make_mint_from_int_temporarily(num2, 300);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 3);
		test(castedmod == 100);
	}
	// 300 floor -100 = -3, 0
	{
		make_mint_from_int_temporarily(num1, 300);
		make_mint_from_int_temporarily(num2, -100);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == -3);
		test(castedmod == 0);
	}
	// 100 floor -300 = 0, -100
	{
		make_mint_from_int_temporarily(num1, 100);
		make_mint_from_int_temporarily(num2, -300);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 0);
		test(castedmod == -100);
	}
	// 1000 floor -300 = -3, -100
	{
		make_mint_from_int_temporarily(num1, 1000);
		make_mint_from_int_temporarily(num2, -300);
		floor_mint_temporarily(numdiv, nummod, num1, num2);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == -3);
		test(castedmod == -100);
	}
}
