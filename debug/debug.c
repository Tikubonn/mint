#include <mint.h>
#include <stdio.h>

void print_mint_in (mint *num, mint *num0, mint *num10, FILE *stream){
  if (is_equal_mint(num0, num)){
    free_mint(num);
    return;
  }
  mint *numdiv;
  mint *nummod;
  floor_mint(num, num10, &numdiv, &nummod);
  free_mint(num);
  int inummod = cast_mint_to_int(nummod);
  free_mint(nummod);
  print_mint_in(numdiv, num0, num10, stream);
  putc('0' + inummod, stream);
}

void print_mint (mint *num, FILE *stream){
  mint *num0 = make_mint_from_int(0);
  mint *num10 = make_mint_from_int(10);
  if (is_equal_mint(num0, num)){
    putc('0', stream);
    free_mint(num0);
    free_mint(num10);
    return;
  }
  print_mint_in(copy_mint(num), num0, num10, stream);
  free_mint(num0);
  free_mint(num10);
  return;
}

void print_mint_ln (mint *num, FILE *stream){
  print_mint(num, stream);
  putc('\n', stream);
}
