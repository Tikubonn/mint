#include "test-add-mint-temporarily.h"
#include "test-sub-mint-temporarily.h"
#include "test-mul-mint-temporarily.h"
#include "test-floor-mint-temporarily.h"
#include "test-minus-mint-temporarily.h"
#include "test-div-mint-temporarily.h"
#include "test-mod-mint-temporarily.h"
#include "test-not-mint-temporarily.h"
#include "test-and-mint-temporarily.h"
#include "test-or-mint-temporarily.h"
#include "test-xor-mint-temporarily.h"
#include "test-lshift-mint-temporarily.h"
#include "test-rshift-mint-temporarily.h"

int main (){
	test_minus_mint_temporarily();
	test_add_mint_temporarily();
	test_sub_mint_temporarily();
	test_mul_mint_temporarily();
	test_floor_mint_temporarily();
	test_div_mint_temporarily();
	test_mod_mint_temporarily();
	test_not_mint_temporarily();
	test_and_mint_temporarily();
	test_or_mint_temporarily();
	test_xor_mint_temporarily();
	test_lshift_mint_temporarily();
	test_rshift_mint_temporarily();
	return 0;
}
