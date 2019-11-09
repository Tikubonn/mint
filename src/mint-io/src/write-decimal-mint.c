#include <mint.h>

static int write_decimal (mint *number, mint_io_buffer *buffer){
	make_mint_from_int_temporarily(ten, 10);
	mint *num = copy_mint(number);
	if (num == NULL){
		return 1;
	}
	while (is_zero_mint(num) == false){
		mint *numdiv;
		mint *nummod;
		if (floor_mint(num, ten, &numdiv, &nummod) != 0){
			free_mint(num);
			return 1;
		}
		int casted = cast_mint_to_int(nummod);
		if (put_mint_io_buffer('0' + casted, buffer) != 0){
			free_mint(num);
			free_mint(numdiv);
			free_mint(nummod);
			return 1;
		}
		free_mint(num);
		free_mint(nummod);
		num = numdiv;
	}
	free_mint(num);
	return 0;
}

int write_decimal_mint (mint *number, mint_io_buffer *buffer){
	if (is_zero_mint(number)){
		if (put_mint_io_buffer('0', buffer) != 0){
			return 1;
		}
		return 0;
	}
	else
	if (is_negative_mint(number)){
		mint *plused = minus_mint(number);
		if (plused == NULL){
			return 1;
		}
		if (write_decimal(plused, buffer) != 0){
			free_mint(plused);
			return 1;
		}
		if (put_mint_io_buffer('-', buffer) != 0){
			free_mint(plused);
			return 1;
		}
		free_mint(plused);
		return 0;
	}
	else {
		if (write_decimal(number, buffer) != 0){
			return 1;
		}
		return 0;
	}
}
