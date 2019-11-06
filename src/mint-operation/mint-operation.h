
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

void minus_mint_manually (mint*, mint*);

extern mint *minus_mint (mint*);
