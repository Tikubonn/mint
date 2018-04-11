
all:
	make auto.dll
	make auto.lib

clean:
	rm -f compiled/make_mint.o
	rm -f compiled/free_mint.o
	rm -f compiled/copy_mint.o
	rm -f compiled/not_mint.o
	rm -f compiled/and_mint.o
	rm -f compiled/or_mint.o
	rm -f compiled/xor_mint.o
	rm -f compiled/add_mint.o
	rm -f compiled/sub_mint.o
	rm -f compiled/mul_mint.o
	rm -f compiled/floor_mint.o
	rm -f compiled/div_mint.o
	rm -f compiled/mod_mint.o

auto.dll: compiled/make_mint.o compiled/free_mint.o compiled/copy_mint.o compiled/not_mint.o compiled/and_mint.o compiled/or_mint.o compiled/xor_mint.o compiled/add_mint.o compiled/sub_mint.o compiled/mul_mint.o compiled/floor_mint.o compiled/div_mint.o compiled/mod_mint.o
	gcc $(CFLAGS) -shared compiled/make_mint.o compiled/free_mint.o compiled/copy_mint.o compiled/not_mint.o compiled/and_mint.o compiled/or_mint.o compiled/xor_mint.o compiled/add_mint.o compiled/sub_mint.o compiled/mul_mint.o compiled/floor_mint.o compiled/div_mint.o compiled/mod_mint.o $(ROOTDIR)/manual/manual.dll -o auto.dll

auto.lib: compiled/make_mint.o compiled/free_mint.o compiled/copy_mint.o compiled/not_mint.o compiled/and_mint.o compiled/or_mint.o compiled/xor_mint.o compiled/add_mint.o compiled/sub_mint.o compiled/mul_mint.o compiled/floor_mint.o compiled/div_mint.o compiled/mod_mint.o
	ar r auto.lib compiled/make_mint.o compiled/free_mint.o compiled/copy_mint.o compiled/not_mint.o compiled/and_mint.o compiled/or_mint.o compiled/xor_mint.o compiled/add_mint.o compiled/sub_mint.o compiled/mul_mint.o compiled/floor_mint.o compiled/div_mint.o compiled/mod_mint.o
	
compiled/make_mint.o: src/make_mint.c
	gcc $(CFLAGS) -c src/make_mint.c -o compiled/make_mint.o

compiled/free_mint.o: src/free_mint.c
	gcc $(CFLAGS) -c src/free_mint.c -o compiled/free_mint.o

compiled/copy_mint.o: src/copy_mint.c
	gcc $(CFLAGS) -c src/copy_mint.c -o compiled/copy_mint.o

compiled/not_mint.o: src/not_mint.c
	gcc $(CFLAGS) -c src/not_mint.c -o compiled/not_mint.o

compiled/and_mint.o: src/and_mint.c
	gcc $(CFLAGS) -c src/and_mint.c -o compiled/and_mint.o

compiled/or_mint.o: src/or_mint.c
	gcc $(CFLAGS) -c src/or_mint.c -o compiled/or_mint.o

compiled/xor_mint.o: src/xor_mint.c
	gcc $(CFLAGS) -c src/xor_mint.c -o compiled/xor_mint.o

compiled/add_mint.o: src/add_mint.c
	gcc $(CFLAGS) -c src/add_mint.c -o compiled/add_mint.o

compiled/sub_mint.o: src/sub_mint.c
	gcc $(CFLAGS) -c src/sub_mint.c -o compiled/sub_mint.o

compiled/mul_mint.o: src/mul_mint.c
	gcc $(CFLAGS) -c src/mul_mint.c -o compiled/mul_mint.o

compiled/floor_mint.o: src/floor_mint.c
	gcc $(CFLAGS) -c src/floor_mint.c -o compiled/floor_mint.o

compiled/div_mint.o: src/div_mint.c
	gcc $(CFLAGS) -c src/div_mint.c -o compiled/div_mint.o

compiled/mod_mint.o: src/mod_mint.c
	gcc $(CFLAGS) -c src/mod_mint.c -o compiled/mod_mint.o
