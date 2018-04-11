#include <stdio.h>
#include <stdlib.h>
#include "manual/manual.h"
#include "auto/auto.h"
#include "debug/debug.h"

#define test(code)\
if (code){\
printf("success: %s\n", #code);\
}\
else {\
printf("failed: %s\n", #code);\
exit(1);\
}

int main (){

  /* test copy */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = copy_mint(numa);
    int inuma = cast_mint_to_int(numa);
    int inumb = cast_mint_to_int(numb);
    test(inuma == inumb && inuma == 2525);
  }

  /* test cast */

  {
    mint *numa = make_mint_from_int(0);
    int inuma = cast_mint_to_int(numa);
    test(inuma == 0);
  }

  {
    mint *numa = make_mint_from_int(2828);
    int inuma = cast_mint_to_int(numa);
    test(inuma == 2828);
  }

  /* test add */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2525);
    mint *numc = add_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 + 2525);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2828);
    mint *numc = add_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 + -2828);
    free_mint(numc);
  }

  /* test sub */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2525);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 - 2525);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2828);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 - 2828);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2525);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 - -2525);
    free_mint(numc);
  }

  /* test mul */
  
  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 * 2);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 * -2);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(-2525);
    mint *numb = make_mint_from_int(-2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == -2525 * -2);
    free_mint(numc);
  }
  
  /* test div */

  {
    mint *numa = make_mint_from_int(256);
    mint *numb = make_mint_from_int(3);
    mint *numc = div_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 256 / 3);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(256);
    mint *numb = make_mint_from_int(3);
    mint *numc = mod_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 256 % 3);
    free_mint(numc);
  }
	
	/* test positive? */
	
	{
		mint *num = make_mint_from_int(0);
		test(is_positive_mint(num) && 0 <= 0);
		free_mint(num);
	}
	
	{
		mint *num = make_mint_from_int(1);
		test(is_positive_mint(num) && 0 <= 1);
		free_mint(num);
	}
	
	{
		mint *num = make_mint_from_int(-1);
		test(!is_positive_mint(num) && !(0 <= -1));
		free_mint(num);
	}
	
	/* test negative? */
	
	{
		mint *num = make_mint_from_int(0);
		test(!is_negative_mint(num) && !(0 < 0));
		free_mint(num);
	}
	
	{
		mint *num = make_mint_from_int(1);
		test(!is_negative_mint(num) && !(1 < 0));
		free_mint(num);
	}
	
	{
		mint *num = make_mint_from_int(-1);
		test(is_negative_mint(num) && (-1 < 0));
		free_mint(num);
	}
	
	/* test = */
	
	{
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(10);
		test(is_equal_mint(numa, numb) && 10 == 10);
		free_mint(numa);
		free_mint(numb);
	}
	
	{
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(11);
		test(!is_equal_mint(numa, numb) && !(10 == 11));
		free_mint(numa);
		free_mint(numb);
	}
	
	/* test != */
	
	{
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(10);
		test(!is_unequal_mint(numa, numb) && !(10 != 10));
		free_mint(numa);
		free_mint(numb);
	}
	
	{
		mint *numa = make_mint_from_int(10);
		mint *numb = make_mint_from_int(11);
		test(is_unequal_mint(numa, numb) && 10 != 11);
		free_mint(numa);
		free_mint(numb);
	}
	
  return 0;
}
