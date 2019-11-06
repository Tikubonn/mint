#include <test.h>
#include <mint.h>

void test_copy_mint_temporarily (){
	make_mint_temporarily(number, sizeof(int));
	test(mint_real_size(number) == sizeof(int));
	test(mint_size(number) <= mint_real_size(number));
	set_mint(0xff, 0, 4, number);
	set_mint(0xff, 1, 4, number);
	set_mint(0xff, 2, 4, number);
	test(get_mint(0, 0, number) == 0xf0);
	test(get_mint(1, 0, number) == 0xff);
	test(get_mint(2, 0, number) == 0xff);
	test(get_mint(3, 0, number) == 0x0f);
	test(get_mint(0, 4, number) == 0xff);
	test(get_mint(1, 4, number) == 0xff);
	test(get_mint(2, 4, number) == 0xff);
	copy_mint_temporarily(copied, number);
	test(mint_real_size(copied) == mint_size(number));
	test(mint_size(copied) <= mint_real_size(copied));
	test(get_mint(0, 0, copied) == 0xf0);
	test(get_mint(1, 0, copied) == 0xff);
	test(get_mint(2, 0, copied) == 0xff);
	test(get_mint(3, 0, copied) == 0x0f);
	test(get_mint(0, 4, copied) == 0xff);
	test(get_mint(1, 4, copied) == 0xff);
	test(get_mint(2, 4, copied) == 0xff);
}
