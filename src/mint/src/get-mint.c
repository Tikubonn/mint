#include <mint.h>
#include <stddef.h>

mint_cell get_mint (size_t index, size_t seek, mint *number){
  mint_cell result = 0;
  size_t seek1 = seek;
  size_t seek2 = 8 - seek;
  if (index < number->size){
    result &= ~(0xff >> seek1);
    result |= number->sequence[index] >> seek1;
  }
  else {
		result |= (is_negative_mint(number) ? 0xff : 0x00) >> seek1;
  }
  if (index +1 < number->size){
    result &= ~(0xff << seek2);
    result |= number->sequence[index +1] << seek2;
  }
  else {
		result |= (is_negative_mint(number) ? 0xff : 0x00) << seek2;
  }
  return result;
}
