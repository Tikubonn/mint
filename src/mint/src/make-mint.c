#include <mint.h>
#include <stdlib.h>

mint *make_mint (size_t size){
  mint_cell *sequence = malloc(sizeof(mint_cell) * size);
  if (sequence == NULL){
    return NULL;
  }
  mint *numout = malloc(sizeof(mint));
  if (numout == NULL){
    free(sequence);
    return NULL;
  }
  init_mint(sequence, size, numout);
  return numout;
}

mint *make_mint_from_int (int num){
  mint *numout = make_mint(sizeof(int));
	if (numout == NULL){
    return NULL;
  }
  load_mint_from_int(num, numout);
  return numout;
}

mint *make_mint_from_long (long num){
  mint *numout = make_mint(sizeof(long));
	if (numout == NULL){
    return NULL;
  }
  load_mint_from_long(num, numout);
  return numout;
}

static mint *make_mint_from_negative_string (char *sequence, size_t size){
  mint_cell num10seq[1];
  mint num10;
  init_mint(num10seq, 1, &num10);
  load_mint_from_int(10, &num10);
  mint *numresult = make_mint_from_int(0);
  for (size_t index = 0; index < size; index++){
    char character = sequence[index];
    if ('0' <= character && character <= '9'){
      mint *nummul = mul_mint(numresult, &num10);
      mint_cell numcharseq[1];
      mint numchar;
      init_mint(numcharseq, 1, &numchar);
      load_mint_from_int(character - '0', &numchar);
      mint *numsub = sub_mint(nummul, &numchar);
      free_mint(numresult);
      free_mint(nummul);
      numresult = numsub;
    }
    else {
      return NULL;
    }
  }
  return numresult;
}

static mint *make_mint_from_positive_string (char *sequence, size_t size){
  mint_cell num10seq[1];
  mint num10;
  init_mint(num10seq, 1, &num10);
  load_mint_from_int(10, &num10);
  mint *numresult = make_mint_from_int(0);
  for (size_t index = 0; index < size; index++){
    char character = sequence[index];
    if ('0' <= character && character <= '9'){
      mint *nummul = mul_mint(numresult, &num10);
      mint_cell numcharseq[1];
      mint numchar;
      init_mint(numcharseq, 1, &numchar);
      load_mint_from_int(character - '0', &numchar);
      mint *numadd = add_mint(nummul, &numchar);
      free_mint(numresult);
      free_mint(nummul);
      numresult = numadd;
    }
    else {
      return NULL;
    }
  }
  return numresult;
}

mint *make_mint_from_string (char *sequence, size_t size){
  if (0 < size){
    if (sequence[0] == '\0'){
      return NULL;
    }
    else 
    if (sequence[0] == '-'){
      if (2 < size){ // need character after sign.
        return make_mint_from_negative_string(sequence +1, size -1);
      }
      return NULL;
    }
    else 
    if (sequence[0] == '+'){
      if (2 < size){ // need character after sign.
        return make_mint_from_positive_string(sequence +1, size -1);
      }
      return NULL;
    }
    else {
      return make_mint_from_positive_string(sequence, size);
    }
  }
  return NULL;
}

static size_t strlength (char *sequence){
  size_t length = 0;
  char *seq = sequence;
  while (*seq != '\0'){
    length++;
    seq++;
  }
  return length;
}

mint *make_mint_from_string0 (char *source){
  size_t length = strlength(source);
  return make_mint_from_string(source, length);
}
