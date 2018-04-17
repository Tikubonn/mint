#include <stdlib.h>
#include <mint.h>

mint *make_mint (unsigned long size){
  mint_cell *numdata = malloc(sizeof(mint_cell) * size);
  mint *num = malloc(sizeof(mint));
  init_mint(numdata, sizeof(mint_cell) * size, num);
  clear_mint(num);
  return num;
}

mint *make_mint_from_int (int num){
  mint *numout = make_mint(sizeof(int));
  load_mint_from_int(num, numout);
  return numout;
}

mint *make_mint_from_long (long num){
  mint *numout = make_mint(sizeof(long));
  load_mint_from_long(num, numout);
  return numout;
}

static mint *make_mint_from_string_negative (char *source){
  mint *num10 = make_mint_from_int(10);
  mint *numcurrent = make_mint_from_int(0);
  for (; *source; source++){
    if (*source < '0' || '9' < *source){
      free_mint(num10);
      free_mint(numcurrent);
      return NULL;
    }
    mint *nummul = mul_mint(numcurrent, num10);
    mint *numchar = make_mint_from_int(*source - '0');
    mint *numsub = sub_mint(nummul, numchar);
    free_mint(numcurrent);
    free_mint(nummul);
    free_mint(numchar);
    numcurrent = numsub;
  }
  return numcurrent;
}

static mint *make_mint_from_string_positive (char *source){
  mint *num10 = make_mint_from_int(10);
  mint *numcurrent = make_mint_from_int(0);
  for (; *source; source++){
    if (*source < '0' || '9' < *source){
      free_mint(num10);
      free_mint(numcurrent);
      return NULL;
    }
    mint *nummul = mul_mint(numcurrent, num10);
    mint *numchar = make_mint_from_int(*source - '0');
    mint *numadd = add_mint(nummul, numchar);
    free_mint(numcurrent);
    free_mint(nummul);
    free_mint(numchar);
    numcurrent = numadd;
  }
  return numcurrent;
}

mint *make_mint_from_string (char *source){
  if (*source == 0){
    return NULL;
  }
  if (*source == '-'){
    source++;
    return make_mint_from_string_negative(source);
  }
  if (*source == '+'){
    source++;
    return make_mint_from_string_positive(source);
  }
  return make_mint_from_string_positive(source);
}
