#include <test.h>
#include <mint.h>

void test_floor_mint (){
	// 300 floor 100 = 3, 0
	{
		mint *num1 = make_mint_from_int(300);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(100);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 3);
		test(castedmod == 0);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	// 100 floor 300 = 0, 100
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(300);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 0);
		test(castedmod == 100);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	// 1000 floor 300 = 3, 100
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(300);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 3);
		test(castedmod == 100);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	// 300 floor -100 = -3, 0
	{
		mint *num1 = make_mint_from_int(300);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-100);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == -3);
		test(castedmod == 0);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	// 100 floor -300 = 0, -100
	{
		mint *num1 = make_mint_from_int(100);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-300);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == 0);
		test(castedmod == -100);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	// 1000 floor -300 = -3, -100
	{
		mint *num1 = make_mint_from_int(1000);
		test(num1 != NULL);
		mint *num2 = make_mint_from_int(-300);
		test(num2 != NULL);
		mint *numdiv;
		mint *nummod;
		test(floor_mint(num1, num2, &numdiv, &nummod) == 0);
		int casteddiv = cast_mint_to_int(numdiv);
		int castedmod = cast_mint_to_int(nummod);
		test(casteddiv == -3);
		test(castedmod == -100);
		free_mint(num1);
		free_mint(num2);
		free_mint(numdiv);
		free_mint(nummod);
	}
	
}
