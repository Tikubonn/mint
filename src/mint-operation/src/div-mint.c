#include <mint.h>
#include <stdlib.h>

mint *div_mint (mint *number1, mint *number2){
	if (number1 == NULL){
		return NULL;
	}
	if (number2 == NULL){
		return NULL;
	}
  mint *divresult;
  mint *modresult;
  if (floor_mint(number1, number2, &divresult, &modresult) != 0){
		return NULL;
	}
	else {
		free_mint(modresult);
		return divresult;		
	}
}
