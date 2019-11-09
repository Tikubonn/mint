#include <stddef.h>

extern void init_mint_io_buffer (char*, size_t, mint_io_buffer*);
#include <stddef.h>

extern mint_io_buffer *make_mint_io_buffer (size_t);

extern void free_mint_io_buffer (mint_io_buffer*);

extern int put_mint_io_buffer (char, mint_io_buffer*);
#include <stddef.h>

extern int extend_mint_io_buffer (size_t, mint_io_buffer*);
#include <stdio.h>

extern size_t write_to_mint_io_buffer (mint_io_buffer*, FILE*);
