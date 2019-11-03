
default:

clean:
	rm -f mint-operation.h
	rm -f mint-operation.lib
	rm -f compiled/add-mint-manually.o
	rm -f compiled/add_mint.o
	rm -f compiled/and-mint-manually.o
	rm -f compiled/and_mint.o
	rm -f compiled/div_mint.o
	rm -f compiled/floor-mint-manually.o
	rm -f compiled/floor_mint.o
	rm -f compiled/is-equal-mint.o
	rm -f compiled/is-greater-mint.o
	rm -f compiled/is-greater-or-equal-mint.o
	rm -f compiled/is-lesser-mint.o
	rm -f compiled/is-lesser-or-equal-mint.o
	rm -f compiled/is-negative-mint.o
	rm -f compiled/is-positive-mint.o
	rm -f compiled/is-unequal-mint.o
	rm -f compiled/is-zero-mint.o
	rm -f compiled/lshift-mint-manually.o
	rm -f compiled/lshift_mint.o
	rm -f compiled/mint-shift-size.o
	rm -f compiled/mod_mint.o
	rm -f compiled/mul-mint-manually.o
	rm -f compiled/mul_mint.o
	rm -f compiled/not-mint-manually.o
	rm -f compiled/not_mint.o
	rm -f compiled/or-mint-manually.o
	rm -f compiled/or_mint.o
	rm -f compiled/rshift-mint-manually.o
	rm -f compiled/rshift_mint.o
	rm -f compiled/sub-mint-manually.o
	rm -f compiled/sub_mint.o
	rm -f compiled/xor-mint-manually.o
	rm -f compiled/xor_mint.o

mint-operation.h: src/add-mint-manually.h src/add_mint.h src/and-mint-manually.h src/and_mint.h src/div_mint.h src/floor-mint-manually.h src/floor_mint.h src/is-equal-mint.h src/is-greater-mint.h src/is-greater-or-equal-mint.h src/is-lesser-mint.h src/is-lesser-or-equal-mint.h src/is-negative-mint.h src/is-positive-mint.h src/is-unequal-mint.h src/is-zero-mint.h src/lshift-mint-manually.h src/lshift_mint.h src/mint-shift-size.h src/mod_mint.h src/mul-mint-manually.h src/mul_mint.h src/not-mint-manually.h src/not_mint.h src/or-mint-manually.h src/or_mint.h src/rshift-mint-manually.h src/rshift_mint.h src/sub-mint-manually.h src/sub_mint.h src/xor-mint-manually.h src/xor_mint.h
	cat src/add-mint-manually.h src/add_mint.h src/and-mint-manually.h src/and_mint.h src/div_mint.h src/floor-mint-manually.h src/floor_mint.h src/is-equal-mint.h src/is-greater-mint.h src/is-greater-or-equal-mint.h src/is-lesser-mint.h src/is-lesser-or-equal-mint.h src/is-negative-mint.h src/is-positive-mint.h src/is-unequal-mint.h src/is-zero-mint.h src/lshift-mint-manually.h src/lshift_mint.h src/mint-shift-size.h src/mod_mint.h src/mul-mint-manually.h src/mul_mint.h src/not-mint-manually.h src/not_mint.h src/or-mint-manually.h src/or_mint.h src/rshift-mint-manually.h src/rshift_mint.h src/sub-mint-manually.h src/sub_mint.h src/xor-mint-manually.h src/xor_mint.h > mint-operation.h

mint-operation.lib: compiled/add-mint-manually.o compiled/add_mint.o compiled/and-mint-manually.o compiled/and_mint.o compiled/div_mint.o compiled/floor-mint-manually.o compiled/floor_mint.o compiled/is-equal-mint.o compiled/is-greater-mint.o compiled/is-greater-or-equal-mint.o compiled/is-lesser-mint.o compiled/is-lesser-or-equal-mint.o compiled/is-negative-mint.o compiled/is-positive-mint.o compiled/is-unequal-mint.o compiled/is-zero-mint.o compiled/lshift-mint-manually.o compiled/lshift_mint.o compiled/mint-shift-size.o compiled/mod_mint.o compiled/mul-mint-manually.o compiled/mul_mint.o compiled/not-mint-manually.o compiled/not_mint.o compiled/or-mint-manually.o compiled/or_mint.o compiled/rshift-mint-manually.o compiled/rshift_mint.o compiled/sub-mint-manually.o compiled/sub_mint.o compiled/xor-mint-manually.o compiled/xor_mint.o
	ar r mint-operation.lib compiled/add-mint-manually.o compiled/add_mint.o compiled/and-mint-manually.o compiled/and_mint.o compiled/div_mint.o compiled/floor-mint-manually.o compiled/floor_mint.o compiled/is-equal-mint.o compiled/is-greater-mint.o compiled/is-greater-or-equal-mint.o compiled/is-lesser-mint.o compiled/is-lesser-or-equal-mint.o compiled/is-negative-mint.o compiled/is-positive-mint.o compiled/is-unequal-mint.o compiled/is-zero-mint.o compiled/lshift-mint-manually.o compiled/lshift_mint.o compiled/mint-shift-size.o compiled/mod_mint.o compiled/mul-mint-manually.o compiled/mul_mint.o compiled/not-mint-manually.o compiled/not_mint.o compiled/or-mint-manually.o compiled/or_mint.o compiled/rshift-mint-manually.o compiled/rshift_mint.o compiled/sub-mint-manually.o compiled/sub_mint.o compiled/xor-mint-manually.o compiled/xor_mint.o

compiled/add-mint-manually.o: src/add-mint-manually.c 
	gcc $(CFLAGS) -c src/add-mint-manually.c -o compiled/add-mint-manually.o

compiled/add_mint.o: src/add_mint.c 
	gcc $(CFLAGS) -c src/add_mint.c -o compiled/add_mint.o

compiled/and-mint-manually.o: src/and-mint-manually.c 
	gcc $(CFLAGS) -c src/and-mint-manually.c -o compiled/and-mint-manually.o

compiled/and_mint.o: src/and_mint.c 
	gcc $(CFLAGS) -c src/and_mint.c -o compiled/and_mint.o

compiled/div_mint.o: src/div_mint.c 
	gcc $(CFLAGS) -c src/div_mint.c -o compiled/div_mint.o

compiled/floor-mint-manually.o: src/floor-mint-manually.c 
	gcc $(CFLAGS) -c src/floor-mint-manually.c -o compiled/floor-mint-manually.o

compiled/floor_mint.o: src/floor_mint.c 
	gcc $(CFLAGS) -c src/floor_mint.c -o compiled/floor_mint.o

compiled/is-equal-mint.o: src/is-equal-mint.c 
	gcc $(CFLAGS) -c src/is-equal-mint.c -o compiled/is-equal-mint.o

compiled/is-greater-mint.o: src/is-greater-mint.c 
	gcc $(CFLAGS) -c src/is-greater-mint.c -o compiled/is-greater-mint.o

compiled/is-greater-or-equal-mint.o: src/is-greater-or-equal-mint.c 
	gcc $(CFLAGS) -c src/is-greater-or-equal-mint.c -o compiled/is-greater-or-equal-mint.o

compiled/is-lesser-mint.o: src/is-lesser-mint.c 
	gcc $(CFLAGS) -c src/is-lesser-mint.c -o compiled/is-lesser-mint.o

compiled/is-lesser-or-equal-mint.o: src/is-lesser-or-equal-mint.c 
	gcc $(CFLAGS) -c src/is-lesser-or-equal-mint.c -o compiled/is-lesser-or-equal-mint.o

compiled/is-negative-mint.o: src/is-negative-mint.c 
	gcc $(CFLAGS) -c src/is-negative-mint.c -o compiled/is-negative-mint.o

compiled/is-positive-mint.o: src/is-positive-mint.c 
	gcc $(CFLAGS) -c src/is-positive-mint.c -o compiled/is-positive-mint.o

compiled/is-unequal-mint.o: src/is-unequal-mint.c 
	gcc $(CFLAGS) -c src/is-unequal-mint.c -o compiled/is-unequal-mint.o

compiled/is-zero-mint.o: src/is-zero-mint.c 
	gcc $(CFLAGS) -c src/is-zero-mint.c -o compiled/is-zero-mint.o

compiled/lshift-mint-manually.o: src/lshift-mint-manually.c 
	gcc $(CFLAGS) -c src/lshift-mint-manually.c -o compiled/lshift-mint-manually.o

compiled/lshift_mint.o: src/lshift_mint.c 
	gcc $(CFLAGS) -c src/lshift_mint.c -o compiled/lshift_mint.o

compiled/mint-shift-size.o: src/mint-shift-size.c 
	gcc $(CFLAGS) -c src/mint-shift-size.c -o compiled/mint-shift-size.o

compiled/mod_mint.o: src/mod_mint.c 
	gcc $(CFLAGS) -c src/mod_mint.c -o compiled/mod_mint.o

compiled/mul-mint-manually.o: src/mul-mint-manually.c 
	gcc $(CFLAGS) -c src/mul-mint-manually.c -o compiled/mul-mint-manually.o

compiled/mul_mint.o: src/mul_mint.c 
	gcc $(CFLAGS) -c src/mul_mint.c -o compiled/mul_mint.o

compiled/not-mint-manually.o: src/not-mint-manually.c 
	gcc $(CFLAGS) -c src/not-mint-manually.c -o compiled/not-mint-manually.o

compiled/not_mint.o: src/not_mint.c 
	gcc $(CFLAGS) -c src/not_mint.c -o compiled/not_mint.o

compiled/or-mint-manually.o: src/or-mint-manually.c 
	gcc $(CFLAGS) -c src/or-mint-manually.c -o compiled/or-mint-manually.o

compiled/or_mint.o: src/or_mint.c 
	gcc $(CFLAGS) -c src/or_mint.c -o compiled/or_mint.o

compiled/rshift-mint-manually.o: src/rshift-mint-manually.c 
	gcc $(CFLAGS) -c src/rshift-mint-manually.c -o compiled/rshift-mint-manually.o

compiled/rshift_mint.o: src/rshift_mint.c 
	gcc $(CFLAGS) -c src/rshift_mint.c -o compiled/rshift_mint.o

compiled/sub-mint-manually.o: src/sub-mint-manually.c 
	gcc $(CFLAGS) -c src/sub-mint-manually.c -o compiled/sub-mint-manually.o

compiled/sub_mint.o: src/sub_mint.c 
	gcc $(CFLAGS) -c src/sub_mint.c -o compiled/sub_mint.o

compiled/xor-mint-manually.o: src/xor-mint-manually.c 
	gcc $(CFLAGS) -c src/xor-mint-manually.c -o compiled/xor-mint-manually.o

compiled/xor_mint.o: src/xor_mint.c 
	gcc $(CFLAGS) -c src/xor_mint.c -o compiled/xor_mint.o
