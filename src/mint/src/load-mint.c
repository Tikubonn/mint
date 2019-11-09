#include <mint.h>
#include <stddef.h>
#define min(a, b) ((a)<(b)?(a):(b))

void load_mint_from_int (int value, mint *number){
	int val = value;
	for (size_t index = 0; index < sizeof(int); index++){
		set_mint(val & 0xff, index, 0, number);
		val >>= 8;
	}
	number->seek = min(number->size, sizeof(int));
	trim_mint(number);
}

void load_mint_from_long (long value, mint *number){
	long val = value;
	for (size_t index = 0; index < sizeof(long); index++){
		set_mint(val & 0xff, index, 0, number);
		val >>= 8;
	}
	number->seek = min(number->size, sizeof(long));
	trim_mint(number);
}
