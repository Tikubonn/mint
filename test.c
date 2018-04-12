#include <stdio.h>
#include <stdlib.h>
#include "manual/manual.h"
#include "auto/auto.h"
#include "debug/debug.h"

#define test(code)\
if (code){ printf("success: %s\n", #code); }\
else { printf("failed: %s\n", #code); exit(1); }

#define test2(codea, codeb)\
int _resa = codea;\
int _resb = codeb;\
if ((_resa) == (_resb)){ printf("success: %s == %s\n", #codea, #codeb); }\
else { printf("failed: %s == %s : %d, %d\n", #codea, #codeb, _resa, _resb); exit(1); }

int main (){

  /* test trim */
  
  {
    mint *num = make_mint(4);
    set_mint(0xff, 0, 0, num);
    set_mint(0xff, 1, 0, num);
    trim_mint(num);
    test(size_mint(num) == 3);
    free_mint(num);
  }
  
  {
    mint *num = make_mint(4);
    set_mint(0xff, 0, 0, num);
    set_mint(0x01, 1, 0, num);
    trim_mint(num);
    test(size_mint(num) == 2);
    free_mint(num);
  }  
  
  {
    mint *num = make_mint(2);
    set_mint(0xff, 0, 0, num);
    set_mint(0xff, 1, 0, num);
    trim_mint(num);
    test(size_mint(num) == 1);
    free_mint(num);
  }  
  
  {
    mint *num = make_mint_from_int(0x0f);
    test(size_mint(num) == 1);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(0xff);
    test(size_mint(num) == 2);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(0x0fff);
    test(size_mint(num) == 2);
    free_mint(num);
  }
  
  /* test copy */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = copy_mint(numa);
    int inuma = cast_mint_to_int(numa);
    int inumb = cast_mint_to_int(numb);
    test2(inuma == inumb, inuma == 2525);
    free_mint(numa);
    free_mint(numb);
  }

  /* test cast */

  {
    mint *numa = make_mint_from_int(0);
    int inuma = cast_mint_to_int(numa);
    test(inuma == 0);
    free_mint(numa);
  }

  {
    mint *numa = make_mint_from_int(2828);
    int inuma = cast_mint_to_int(numa);
    test(inuma == 2828);
    free_mint(numa);
  }
  
  /* test and */

  {
    mint *numa = make_mint_from_int(2828);
    mint *numb = make_mint_from_int(2525);
    mint *numc = and_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2828 & 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(-1);
    mint *numb = make_mint_from_int(2525);
    mint *numc = and_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, -1 & 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  /* test or */

  {
    mint *numa = make_mint_from_int(2828);
    mint *numb = make_mint_from_int(2525);
    mint *numc = or_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2828 | 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(-1);
    mint *numb = make_mint_from_int(2525);
    mint *numc = or_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, -1 | 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  /* test xor */

  {
    mint *numa = make_mint_from_int(2828);
    mint *numb = make_mint_from_int(2525);
    mint *numc = xor_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2828 ^ 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(-1);
    mint *numb = make_mint_from_int(2525);
    mint *numc = xor_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, -1 ^ 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  /* test not */

  {
    mint *numa = make_mint_from_int(2828);
    mint *numb = not_mint(numa);
    int inumb = cast_mint_to_int(numb);
    test2(inumb, ~2828);
    free_mint(numa);
    free_mint(numb);
  }

  {
    mint *numa = make_mint_from_int(-1);
    mint *numb = not_mint(numa);
    int inumb = cast_mint_to_int(numb);
    test2(inumb, ~-1);
    free_mint(numa);
    free_mint(numb);
  }

  /* test add */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2525);
    mint *numc = add_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 + 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2828);
    mint *numc = add_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 + -2828);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  /* test sub */

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2525);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 - 2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2828);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 - 2828);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2525);
    mint *numc = sub_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 - -2525);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  /* test mul */
  
  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test(inumc == 2525 * 2);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(2525);
    mint *numb = make_mint_from_int(-2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 2525 * -2);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(-2525);
    mint *numb = make_mint_from_int(-2);
    mint *numc = mul_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, -2525 * -2);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }
  
  /* test div */

  {
    mint *numa = make_mint_from_int(256);
    mint *numb = make_mint_from_int(3);
    mint *numc = div_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 256 / 3);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }

  {
    mint *numa = make_mint_from_int(256);
    mint *numb = make_mint_from_int(3);
    mint *numc = mod_mint(numa, numb);
    int inumc = cast_mint_to_int(numc);
    test2(inumc, 256 % 3);
    free_mint(numa);
    free_mint(numb);
    free_mint(numc);
  }
  
  /* test positive? */
  
  {
    mint *num = make_mint_from_int(0);
    test2(is_positive_mint(num), 0 <= 0);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(1);
    test2(is_positive_mint(num), 0 <= 1);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(-1);
    test2(is_positive_mint(num), 0 <= -1);
    free_mint(num);
  }
  
  /* test negative? */
  
  {
    mint *num = make_mint_from_int(0);
    test2(is_negative_mint(num), 0 < 0);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(1);
    test2(is_negative_mint(num), 1 < 0);
    free_mint(num);
  }
  
  {
    mint *num = make_mint_from_int(-1);
    test2(is_negative_mint(num), -1 < 0);
    free_mint(num);
  }
  
  /* test = */
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_equal_mint(numa, numb), 10 == 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(11);
    test2(is_equal_mint(numa, numb), 10 == 11);
    free_mint(numa);
    free_mint(numb);
  }
  
  /* test != */
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_unequal_mint(numa, numb), 10 != 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(11);
    test2(is_unequal_mint(numa, numb), 10 != 11);
    free_mint(numa);
    free_mint(numb);
  }
  
  /* test < */
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_mint(numa, numb), 10 < 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(9);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_mint(numa, numb), 9 < 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(11);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_mint(numa, numb), 11 < 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  /* test > */
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_mint(numa, numb), 10 > 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(9);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_mint(numa, numb), 9 > 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  {
    mint *numa = make_mint_from_int(11);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_mint(numa, numb), 11 > 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  /* test <= */

  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_or_equal_mint(numa, numb), 10 <= 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(9);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_or_equal_mint(numa, numb), 9 <= 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(11);
    mint *numb = make_mint_from_int(10);
    test2(is_lesser_or_equal_mint(numa, numb), 11 <= 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  /* test >= */
  
  {
    mint *numa = make_mint_from_int(10);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_or_equal_mint(numa, numb), 10 >= 10);
    free_mint(numa);
    free_mint(numb);    
  }
  
  {
    mint *numa = make_mint_from_int(9);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_or_equal_mint(numa, numb), 9 >= 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  {
    mint *numa = make_mint_from_int(11);
    mint *numb = make_mint_from_int(10);
    test2(is_greater_or_equal_mint(numa, numb), 11 >= 10);
    free_mint(numa);
    free_mint(numb);
  }
  
  return 0;
}
