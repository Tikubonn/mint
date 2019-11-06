
default:

clean:
	rm -f mint-operation.h
	rm -f mint-operation.lib
	rm -f compiled/add-mint-manually.o
	rm -f compiled/add-mint.o
	rm -f compiled/and-mint-manually.o
	rm -f compiled/and-mint.o
	rm -f compiled/div-mint.o
	rm -f compiled/floor-mint-manually.o
	rm -f compiled/floor-mint.o
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
	rm -f compiled/lshift-mint.o
	rm -f compiled/mint-shift-size.o
	rm -f compiled/mod-mint.o
	rm -f compiled/mul-mint-manually.o
	rm -f compiled/mul-mint.o
	rm -f compiled/not-mint-manually.o
	rm -f compiled/not-mint.o
	rm -f compiled/or-mint-manually.o
	rm -f compiled/or-mint.o
	rm -f compiled/rshift-mint-manually.o
	rm -f compiled/rshift-mint.o
	rm -f compiled/sub-mint-manually.o
	rm -f compiled/sub-mint.o
	rm -f compiled/xor-mint-manually.o
	rm -f compiled/xor-mint.o
	rm -f compiled/minus-mint-manually.o
	rm -f compiled/minus-mint.o

mint-operation.h: src/add-mint-manually.h src/add-mint.h src/and-mint-manually.h src/and-mint.h src/div-mint.h src/floor-mint-manually.h src/floor-mint.h src/is-equal-mint.h src/is-greater-mint.h src/is-greater-or-equal-mint.h src/is-lesser-mint.h src/is-lesser-or-equal-mint.h src/is-negative-mint.h src/is-positive-mint.h src/is-unequal-mint.h src/is-zero-mint.h src/lshift-mint-manually.h src/lshift-mint.h src/mint-shift-size.h src/mod-mint.h src/mul-mint-manually.h src/mul-mint.h src/not-mint-manually.h src/not-mint.h src/or-mint-manually.h src/or-mint.h src/rshift-mint-manually.h src/rshift-mint.h src/sub-mint-manually.h src/sub-mint.h src/xor-mint-manually.h src/xor-mint.h src/minus-mint-manually.h src/minus-mint.h
	cat src/add-mint-manually.h src/add-mint.h src/and-mint-manually.h src/and-mint.h src/div-mint.h src/floor-mint-manually.h src/floor-mint.h src/is-equal-mint.h src/is-greater-mint.h src/is-greater-or-equal-mint.h src/is-lesser-mint.h src/is-lesser-or-equal-mint.h src/is-negative-mint.h src/is-positive-mint.h src/is-unequal-mint.h src/is-zero-mint.h src/lshift-mint-manually.h src/lshift-mint.h src/mint-shift-size.h src/mod-mint.h src/mul-mint-manually.h src/mul-mint.h src/not-mint-manually.h src/not-mint.h src/or-mint-manually.h src/or-mint.h src/rshift-mint-manually.h src/rshift-mint.h src/sub-mint-manually.h src/sub-mint.h src/xor-mint-manually.h src/xor-mint.h src/minus-mint-manually.h src/minus-mint.h > mint-operation.h

mint-operation.lib: compiled/add-mint-manually.o compiled/add-mint.o compiled/and-mint-manually.o compiled/and-mint.o compiled/div-mint.o compiled/floor-mint-manually.o compiled/floor-mint.o compiled/is-equal-mint.o compiled/is-greater-mint.o compiled/is-greater-or-equal-mint.o compiled/is-lesser-mint.o compiled/is-lesser-or-equal-mint.o compiled/is-negative-mint.o compiled/is-positive-mint.o compiled/is-unequal-mint.o compiled/is-zero-mint.o compiled/lshift-mint-manually.o compiled/lshift-mint.o compiled/mint-shift-size.o compiled/mod-mint.o compiled/mul-mint-manually.o compiled/mul-mint.o compiled/not-mint-manually.o compiled/not-mint.o compiled/or-mint-manually.o compiled/or-mint.o compiled/rshift-mint-manually.o compiled/rshift-mint.o compiled/sub-mint-manually.o compiled/sub-mint.o compiled/xor-mint-manually.o compiled/xor-mint.o compiled/minus-mint-manually.o compiled/minus-mint.o
	ar r mint-operation.lib compiled/add-mint-manually.o compiled/add-mint.o compiled/and-mint-manually.o compiled/and-mint.o compiled/div-mint.o compiled/floor-mint-manually.o compiled/floor-mint.o compiled/is-equal-mint.o compiled/is-greater-mint.o compiled/is-greater-or-equal-mint.o compiled/is-lesser-mint.o compiled/is-lesser-or-equal-mint.o compiled/is-negative-mint.o compiled/is-positive-mint.o compiled/is-unequal-mint.o compiled/is-zero-mint.o compiled/lshift-mint-manually.o compiled/lshift-mint.o compiled/mint-shift-size.o compiled/mod-mint.o compiled/mul-mint-manually.o compiled/mul-mint.o compiled/not-mint-manually.o compiled/not-mint.o compiled/or-mint-manually.o compiled/or-mint.o compiled/rshift-mint-manually.o compiled/rshift-mint.o compiled/sub-mint-manually.o compiled/sub-mint.o compiled/xor-mint-manually.o compiled/xor-mint.o compiled/minus-mint-manually.o compiled/minus-mint.o

compiled/add-mint-manually.o: src/add-mint-manually.c 
	gcc $(CFLAGS) -c src/add-mint-manually.c -o compiled/add-mint-manually.o

compiled/add-mint.o: src/add-mint.c 
	gcc $(CFLAGS) -c src/add-mint.c -o compiled/add-mint.o

compiled/and-mint-manually.o: src/and-mint-manually.c 
	gcc $(CFLAGS) -c src/and-mint-manually.c -o compiled/and-mint-manually.o

compiled/and-mint.o: src/and-mint.c 
	gcc $(CFLAGS) -c src/and-mint.c -o compiled/and-mint.o

compiled/div-mint.o: src/div-mint.c 
	gcc $(CFLAGS) -c src/div-mint.c -o compiled/div-mint.o

compiled/floor-mint-manually.o: src/floor-mint-manually.c 
	gcc $(CFLAGS) -c src/floor-mint-manually.c -o compiled/floor-mint-manually.o

compiled/floor-mint.o: src/floor-mint.c 
	gcc $(CFLAGS) -c src/floor-mint.c -o compiled/floor-mint.o

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

compiled/lshift-mint.o: src/lshift-mint.c 
	gcc $(CFLAGS) -c src/lshift-mint.c -o compiled/lshift-mint.o

compiled/mint-shift-size.o: src/mint-shift-size.c 
	gcc $(CFLAGS) -c src/mint-shift-size.c -o compiled/mint-shift-size.o

compiled/mod-mint.o: src/mod-mint.c 
	gcc $(CFLAGS) -c src/mod-mint.c -o compiled/mod-mint.o

compiled/mul-mint-manually.o: src/mul-mint-manually.c 
	gcc $(CFLAGS) -c src/mul-mint-manually.c -o compiled/mul-mint-manually.o

compiled/mul-mint.o: src/mul-mint.c 
	gcc $(CFLAGS) -c src/mul-mint.c -o compiled/mul-mint.o

compiled/not-mint-manually.o: src/not-mint-manually.c 
	gcc $(CFLAGS) -c src/not-mint-manually.c -o compiled/not-mint-manually.o

compiled/not-mint.o: src/not-mint.c 
	gcc $(CFLAGS) -c src/not-mint.c -o compiled/not-mint.o

compiled/or-mint-manually.o: src/or-mint-manually.c 
	gcc $(CFLAGS) -c src/or-mint-manually.c -o compiled/or-mint-manually.o

compiled/or-mint.o: src/or-mint.c 
	gcc $(CFLAGS) -c src/or-mint.c -o compiled/or-mint.o

compiled/rshift-mint-manually.o: src/rshift-mint-manually.c 
	gcc $(CFLAGS) -c src/rshift-mint-manually.c -o compiled/rshift-mint-manually.o

compiled/rshift-mint.o: src/rshift-mint.c 
	gcc $(CFLAGS) -c src/rshift-mint.c -o compiled/rshift-mint.o

compiled/sub-mint-manually.o: src/sub-mint-manually.c 
	gcc $(CFLAGS) -c src/sub-mint-manually.c -o compiled/sub-mint-manually.o

compiled/sub-mint.o: src/sub-mint.c 
	gcc $(CFLAGS) -c src/sub-mint.c -o compiled/sub-mint.o

compiled/xor-mint-manually.o: src/xor-mint-manually.c 
	gcc $(CFLAGS) -c src/xor-mint-manually.c -o compiled/xor-mint-manually.o

compiled/xor-mint.o: src/xor-mint.c 
	gcc $(CFLAGS) -c src/xor-mint.c -o compiled/xor-mint.o

compiled/minus-mint-manually.o: src/minus-mint-manually.c 
	gcc $(CFLAGS) -c src/minus-mint-manually.c -o compiled/minus-mint-manually.o

compiled/minus-mint.o: src/minus-mint.c 
	gcc $(CFLAGS) -c src/minus-mint.c -o compiled/minus-mint.o
