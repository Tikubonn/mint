#include <mint.h>
#include <stdio.h>

void print_mint_in (mint *num, FILE *stream){
  if (is_zero_mint(num)){
    free_mint(num);
    return;
  }
  mint *numdiv;
  mint *nummod;
  mint *num10 = make_mint_from_int(10);
  floor_mint(num, num10, &numdiv, &nummod);
  free_mint(num);
  free_mint(num10);
  print_mint_in(numdiv, stream);
  int inummod = cast_mint_to_int(nummod);
  free_mint(nummod);
  putc('0' + inummod, stream);
  return;
}

void print_mint (mint *num, FILE *stream){
  if (is_zero_mint(num)){
    putc('0', stream);
    return;
  }
  if (is_negative_mint(num)){
    putc('-', stream);
    mint *num0 = make_mint_from_int(0);
    mint *numabs = sub_mint(num0, num);
    print_mint(numabs, stream);
    free_mint(num0);
    free_mint(numabs);
    return;
  }
  mint *numc = copy_mint(num);
  print_mint_in(numc, stream);
  return;
}

void print_mint_ln (mint *num, FILE *stream){
  print_mint(num, stream);
  putc('\n', stream);
}
