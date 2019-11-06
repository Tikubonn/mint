#include "test-add-mint.h"
#include "test-sub-mint.h"
#include "test-mul-mint.h"
#include "test-floor-mint.h"
#include "test-minus-mint.h"
#include "test-div-mint.h"
#include "test-mod-mint.h"
#include "test-is-equal-mint.h"
#include "test-is-unequal-mint.h"
#include "test-is-lesser-mint.h"
#include "test-is-lesser-or-equal-mint.h"
#include "test-is-greater-mint.h"
#include "test-is-greater-or-equal-mint.h"
#include "test-not-mint.h"
#include "test-and-mint.h"
#include "test-or-mint.h"
#include "test-xor-mint.h"
#include "test-lshift-mint.h"
#include "test-rshift-mint.h"
#include "test-is-zero-mint.h"
#include "test-is-positive-mint.h"
#include "test-is-negative-mint.h"

int main (){
	test_minus_mint();
	test_add_mint();
	test_sub_mint();
	test_mul_mint();
	test_floor_mint();
	test_div_mint();
	test_mod_mint();
	test_is_equal_mint();
	test_is_unequal_mint();
	test_is_lesser_mint();
	test_is_lesser_or_equal_mint();
	test_is_greater_mint();
	test_is_greater_or_equal_mint();
	test_not_mint();
	test_and_mint();
	test_or_mint();
	test_xor_mint();
	test_lshift_mint();
	test_rshift_mint();
	test_is_zero_mint();
	test_is_positive_mint();
	test_is_negative_mint();
	return 0;
}
