
default:

clean:
	rm -f mint.h
	rm -f mint.lib
	rm -f compiled/cast_mint.o
	rm -f compiled/clear_mint.o
	rm -f compiled/copy_mint.o
	rm -f compiled/copy_mint_manually.o
	rm -f compiled/free_mint.o
	rm -f compiled/get_mint.o
	rm -f compiled/init_mint.o
	rm -f compiled/load_mint.o
	rm -f compiled/make_mint.o
	rm -f compiled/mint-size.o
	rm -f compiled/set_mint.o
	rm -f compiled/trim_mint.o

mint.h: src/cast_mint.h src/clear_mint.h src/copy_mint.h src/copy_mint_manually.h src/free_mint.h src/get_mint.h src/init_mint.h src/load_mint.h src/make_mint.h src/mint-size.h src/set_mint.h src/trim_mint.h
	cat src/cast_mint.h src/clear_mint.h src/copy_mint.h src/copy_mint_manually.h src/free_mint.h src/get_mint.h src/init_mint.h src/load_mint.h src/make_mint.h src/mint-size.h src/set_mint.h src/trim_mint.h > mint.h

mint.lib: compiled/cast_mint.o compiled/clear_mint.o compiled/copy_mint.o compiled/copy_mint_manually.o compiled/free_mint.o compiled/get_mint.o compiled/init_mint.o compiled/load_mint.o compiled/make_mint.o compiled/mint-size.o compiled/set_mint.o compiled/trim_mint.o
	ar r mint.lib compiled/cast_mint.o compiled/clear_mint.o compiled/copy_mint.o compiled/copy_mint_manually.o compiled/free_mint.o compiled/get_mint.o compiled/init_mint.o compiled/load_mint.o compiled/make_mint.o compiled/mint-size.o compiled/set_mint.o compiled/trim_mint.o

compiled/cast_mint.o: src/cast_mint.c 
	gcc $(CFLAGS) -c src/cast_mint.c -o compiled/cast_mint.o

compiled/clear_mint.o: src/clear_mint.c 
	gcc $(CFLAGS) -c src/clear_mint.c -o compiled/clear_mint.o

compiled/copy_mint.o: src/copy_mint.c 
	gcc $(CFLAGS) -c src/copy_mint.c -o compiled/copy_mint.o

compiled/copy_mint_manually.o: src/copy_mint_manually.c 
	gcc $(CFLAGS) -c src/copy_mint_manually.c -o compiled/copy_mint_manually.o

compiled/free_mint.o: src/free_mint.c 
	gcc $(CFLAGS) -c src/free_mint.c -o compiled/free_mint.o

compiled/get_mint.o: src/get_mint.c 
	gcc $(CFLAGS) -c src/get_mint.c -o compiled/get_mint.o

compiled/init_mint.o: src/init_mint.c 
	gcc $(CFLAGS) -c src/init_mint.c -o compiled/init_mint.o

compiled/load_mint.o: src/load_mint.c 
	gcc $(CFLAGS) -c src/load_mint.c -o compiled/load_mint.o

compiled/make_mint.o: src/make_mint.c 
	gcc $(CFLAGS) -c src/make_mint.c -o compiled/make_mint.o

compiled/mint-size.o: src/mint-size.c 
	gcc $(CFLAGS) -c src/mint-size.c -o compiled/mint-size.o

compiled/set_mint.o: src/set_mint.c 
	gcc $(CFLAGS) -c src/set_mint.c -o compiled/set_mint.o

compiled/trim_mint.o: src/trim_mint.c 
	gcc $(CFLAGS) -c src/trim_mint.c -o compiled/trim_mint.o
