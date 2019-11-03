#include <mint.h>
#include <stdlib.h>

void free_mint (mint *num){
  free(num->address_beginning);
  free(num);
}
