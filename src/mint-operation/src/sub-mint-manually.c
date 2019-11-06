#include <mint.h>
#include <stddef.h>

void sub_mint_manually (mint *number1, mint *number2, mint *result){
  size_t size = mint_real_size(result);
  int car = 0;
  for (size_t index = 0; index < size; index++){
    mint_cell value1 = get_mint(index, 0, number1);
    mint_cell value2 = get_mint(index, 0, number2);
    int value = value1 - value2 - car;
    car = 0xff < (unsigned int)value;
    set_mint(value, index, 0, result);
  }
  trim_mint(result);
}
