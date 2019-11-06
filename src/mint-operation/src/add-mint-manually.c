#include <mint.h>
#include <stddef.h>
#define max(a, b) (a)<(b)?(b):(a)

void add_mint_manually (mint *number1, mint *number2, mint *result){
  size_t size = mint_real_size(result);
  unsigned int carried = 0; 
  for (size_t index = 0; index < size; index++){
    mint_cell value1 = get_mint(index, 0, number1);  
    mint_cell value2 = get_mint(index, 0, number2);  
    unsigned int value = value1 + value2 + carried;
    carried = 0xff < value;
    set_mint(value, index, 0, result);
  }
  trim_mint(result);
}
