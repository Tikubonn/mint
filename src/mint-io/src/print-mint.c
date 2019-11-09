#include <mint.h>
#include <stdio.h>

int print_mint (mint *number, FILE *file, size_t *wrotesizep){
	mint_io_buffer *buffer = make_mint_io_buffer(128);
	if (buffer == NULL){
		return 1;
	}
	if (write_decimal_mint(number, buffer) != 0){
		free_mint_io_buffer(buffer);
		return 1;
	}
	size_t wrotesize = write_to_mint_io_buffer(buffer, file);
	free_mint_io_buffer(buffer);
	*wrotesizep = wrotesize;
	return 0;
}
