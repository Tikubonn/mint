#pragma once
#include <stdint.h>

typedef uint8_t mint_cell;

typedef struct mint {
  mint_cell *address;
  mint_cell *address_beginning;
  mint_cell *address_end;
} mint;

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

extern void add_mint_manually (mint*, mint*, mint*);

extern mint *add_mint (mint*, mint*);

extern void and_mint_manually (mint*, mint*, mint*);

extern mint *and_mint (mint*, mint*);

extern mint *div_mint (mint*, mint*);

extern int floor_mint_manually (mint*, mint*, mint*);

extern int floor_mint (mint*, mint*, mint**, mint**);
#include <stdbool.h>

extern bool is_equal_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_greater_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_greater_or_equal_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_lesser_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_lesser_or_equal_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_negative_mint (mint*);
#include <stdbool.h>

extern bool is_positive_mint (mint*);
#include <stdbool.h>

extern bool is_unequal_mint (mint*, mint*);
#include <stdbool.h>

extern bool is_zero_mint (mint*);

extern void lshift_mint_manually(mint*, mint*, mint*);

extern mint *lshift_mint (mint*, mint*);
#include <stddef.h>

extern size_t mint_seek_size (mint*);
extern size_t mint_offset_size (mint*);

extern mint *mod_mint (mint*, mint*);

extern void mul_mint_manually (mint*, mint*, mint*);

extern mint *mul_mint (mint*, mint*);

extern void not_mint_manually (mint*, mint*);

extern mint *not_mint (mint*);

extern void or_mint_manually (mint*, mint*, mint*);

extern mint *or_mint (mint*, mint*);

extern void rshift_mint_manually (mint*, mint*, mint*);

extern mint *rshift_mint (mint*, mint*);

extern void sub_mint_manually (mint*, mint*, mint*);

extern mint *sub_mint (mint*, mint*);

extern void xor_mint_manually (mint*, mint*, mint*);

extern mint *xor_mint (mint*, mint*);
#define add_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define add_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _add_argument1 = numa;\
mint *__ ## var ## _add_argument2 = numb;\
make_mint_temporarily(var,\
add_mint_temporarily_max(\
size_mint(__ ## var ## _add_argument1),\
size_mint(__ ## var ## _add_argument2)) +1);\
add_mint_manually(\
__ ## var ## _add_argument1,\
__ ## var ## _add_argument2, var);
#define and_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define and_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _and_argument1 = numa;\
mint *__ ## var ## _and_argument2 = numb;\
make_mint_temporarily(var,\
and_mint_temporarily_max(\
size_mint(__ ## var ## _and_argument1),\
size_mint(__ ## var ## _and_argument2)));\
and_mint_manually(\
__ ## var ## _and_argument1,\
__ ## var ## _and_argument2, var);
#define copy_mint_temporarily(var, num)\
mint *__ ## var ## _copy_argument = num;\
make_mint_temporarily(var, size_mint(__ ## var ## _copy_argument));\
copy_mint_manually(__ ## var ## _copy_argument, var);
#define div_mint_temporarily(var ,numa, numb)\
floor_mint_temporarily(var, __ ## var ## __unused, numa, numb);
#define floor_mint_temporarily(var1, var2, numa, numb)\
mint *__ ## var1 ## _floor_argument1 = numa;\
mint *__ ## var1 ## _floor_argument2 = numb;\
make_mint_temporarily(var1, size_mint(__ ## var1 ## _floor_argument1));\
copy_mint_temporarily(var2, __ ## var1 ## _floor_argument1);\
floor_mint_manually(var2, __ ## var1 ## _floor_argument2, var1);
#include <stddef.h>

#define lshift_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _lshift_argument1 = numa;\
mint *__ ## var ## _lshift_argument2 = numb;\
size_t __ ## var ## _lshift_seek =\
seek_size_mint(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_offset =\
offset_size_mint(__ ## var ## _lshift_argument2);\
size_t __ ## var ## _lshift_size =\
size_mint(__ ## var ## _lshift_argument1);\
make_mint_temporarily(var,\
__ ## var ## _lshift_size +\
__ ## var ## _lshift_offset +\
(__ ## var ## _lshift_seek ? 1 : 0));\
lshift_mint_manually(\
__ ## var ## _lshift_argument1,\
__ ## var ## _lshift_argument2, var);
#include <stddef.h>

#define make_mint_temporarily(var, size)\
size_t __ ## var ## _size = size;\
mint_cell __ ## var ## _data[__ ## var ## _size];\
mint __ ## var;\
mint *var = &__ ## var;\
init_mint(__ ## var ## _data, __ ## var ## _size, var);\
clear_mint(var);

#define make_mint_from_int_temporarily(var, num)\
make_mint_temporarily(var, sizeof(int));\
load_mint_from_int(num, var);

#define make_mint_from_long_temporarily(var, num)\
make_mint_temporarily(var, sizeof(long));\
load_mint_from_long(num, var);
#define mod_mint_temporarily(var ,numa, numb)\
floor_mint_temporarily(__ ## var ## _unused, var, numa, numb);
#define mul_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _mul_argument1 = numa;\
mint *__ ## var ## _mul_argument2 = numb;\
make_mint_temporarily(var,\
size_mint(__ ## var ## _mul_argument1)+\
size_mint(__ ## var ## _mul_argument2)+1);\
mul_mint_manually(\
__ ## var ## _mul_argument1,\
__ ## var ## _mul_argument2, var);
#define not_mint_temporarily(var, num)\
mint *__ ## var ## _not_argument = num;\
make_mint_temporarily(var, size_mint(__ ## var ## _not_argument));\
not_mint_manually(__ ## var ## _not_argument, var);
#define or_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define or_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _or_argument1 = numa;\
mint *__ ## var ## _or_argument2 = numb;\
make_mint_temporarily(var,\
or_mint_temporarily_max(\
size_mint(__ ## var ## _or_argument1),\
size_mint(__ ## var ## _or_argument2)));\
or_mint_manually(\
__ ## var ## _or_argument1,\
__ ## var ## _or_argument2, var);
#include <stddef.h>

#define rshift_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _rshift_argument1 = numa;\
mint *__ ## var ## _rshift_argument2 = numb;\
size_t __ ## var ## _rshift_seek =\
seek_size_mint(__ ## var ## _rshift_argument2);\
size_t __ ## var ## _rshift_offset =\
offset_size_mint(__ ## var ## _rshift_argument2);\
size_t __ ## var ## _rshift_size =\
size_mint(__ ## var ## _rshift_argument1);\
make_mint_temporarily(var,\
__ ## var ## _rshift_size +\
__ ## var ## _rshift_offset);\
rshift_mint_manually(\
__ ## var ## _rshift_argument1,\
__ ## var ## _rshift_argument2, var);
#define sub_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define sub_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _sub_argument1 = numa;\
mint *__ ## var ## _sub_argument2 = numb;\
make_mint_temporarily(var,\
sub_mint_temporarily_max(\
size_mint(__ ## var ## _sub_argument1),\
size_mint(__ ## var ## _sub_argument2)) +1);\
sub_mint_manually(\
__ ## var ## _sub_argument1,\
__ ## var ## _sub_argument2, var);
#define xor_mint_temporarily_max(a,b) ((a)<(b)?(b):(a))
#define xor_mint_temporarily(var, numa, numb)\
mint *__ ## var ## _xor_argument1 = numa;\
mint *__ ## var ## _xor_argument2 = numb;\
make_mint_temporarily(var,\
xor_mint_temporarily_max(\
size_mint(__ ## var ## _xor_argument1),\
size_mint(__ ## var ## _xor_argument2)));\
xor_mint_manually(\
__ ## var ## _xor_argument1,\
__ ## var ## _xor_argument2, var);
