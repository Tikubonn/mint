#include <mint.h>
#include <stddef.h>
#include <stdbool.h>
#define is_negative(a) (a & 0b10000000)

/*
	mint が負数であるかどうかを判定する関数です。
*/

bool is_negative_mint (mint *number){
  size_t size = mint_real_size(number);
  return is_negative(number->sequence[size -1]) != 0;
}
