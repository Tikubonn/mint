
extern int cast_mint_to_int (mint*);
extern unsigned int cast_mint_to_uint (mint*);
extern long cast_mint_to_long (mint*);
extern unsigned long cast_mint_to_ulong (mint*);

extern void clear_mint (mint*);
extern mint *copy_mint (mint*);

extern void copy_mint_manually (mint*, mint*);

extern void free_mint (mint*);
#include <stddef.h>

extern mint_cell get_mint (size_t, size_t, mint*);
#include <stddef.h>

extern void init_mint (mint_cell*, size_t, mint*);

extern void load_mint_from_int (int, mint*);
extern void load_mint_from_long (long, mint*);
#include <stddef.h>

extern mint *make_mint (size_t);
extern mint *make_mint_from_int (int);
extern mint *make_mint_from_long (long);
extern mint *make_mint_from_string (char*, size_t);
extern mint *make_mint_from_string0 (char*);
#include <stddef.h>

extern size_t mint_size (mint*);
extern size_t mint_real_size (mint*);
#include <stddef.h>

extern void set_mint (mint_cell, size_t, size_t, mint*);

extern void trim_mint (mint*);
#include <stddef.h>

extern mint_cell get_absolute_mint (size_t, size_t, mint*);
