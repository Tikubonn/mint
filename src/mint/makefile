
default:

clean:
	rm -f mint.h
	rm -f mint.lib
	rm -f compiled/cast-mint.o
	rm -f compiled/clear-mint.o
	rm -f compiled/copy-mint.o
	rm -f compiled/copy-mint-manually.o
	rm -f compiled/free-mint.o
	rm -f compiled/get-mint.o
	rm -f compiled/init-mint.o
	rm -f compiled/load-mint.o
	rm -f compiled/make-mint.o
	rm -f compiled/mint-size.o
	rm -f compiled/set-mint.o
	rm -f compiled/trim-mint.o
	rm -f compiled/get-absolute-mint.o

mint.h: src/cast-mint.h src/clear-mint.h src/copy-mint.h src/copy-mint-manually.h src/free-mint.h src/get-mint.h src/init-mint.h src/load-mint.h src/make-mint.h src/mint-size.h src/set-mint.h src/trim-mint.h src/get-absolute-mint.h
	cat src/cast-mint.h src/clear-mint.h src/copy-mint.h src/copy-mint-manually.h src/free-mint.h src/get-mint.h src/init-mint.h src/load-mint.h src/make-mint.h src/mint-size.h src/set-mint.h src/trim-mint.h src/get-absolute-mint.h > mint.h

mint.lib: compiled/cast-mint.o compiled/clear-mint.o compiled/copy-mint.o compiled/copy-mint-manually.o compiled/free-mint.o compiled/get-mint.o compiled/init-mint.o compiled/load-mint.o compiled/make-mint.o compiled/mint-size.o compiled/set-mint.o compiled/trim-mint.o compiled/get-absolute-mint.o
	ar r mint.lib compiled/cast-mint.o compiled/clear-mint.o compiled/copy-mint.o compiled/copy-mint-manually.o compiled/free-mint.o compiled/get-mint.o compiled/init-mint.o compiled/load-mint.o compiled/make-mint.o compiled/mint-size.o compiled/set-mint.o compiled/trim-mint.o compiled/get-absolute-mint.o

compiled/cast-mint.o: src/cast-mint.c 
	gcc $(CFLAGS) -c src/cast-mint.c -o compiled/cast-mint.o

compiled/clear-mint.o: src/clear-mint.c 
	gcc $(CFLAGS) -c src/clear-mint.c -o compiled/clear-mint.o

compiled/copy-mint.o: src/copy-mint.c 
	gcc $(CFLAGS) -c src/copy-mint.c -o compiled/copy-mint.o

compiled/copy-mint-manually.o: src/copy-mint-manually.c 
	gcc $(CFLAGS) -c src/copy-mint-manually.c -o compiled/copy-mint-manually.o

compiled/free-mint.o: src/free-mint.c 
	gcc $(CFLAGS) -c src/free-mint.c -o compiled/free-mint.o

compiled/get-mint.o: src/get-mint.c 
	gcc $(CFLAGS) -c src/get-mint.c -o compiled/get-mint.o

compiled/init-mint.o: src/init-mint.c 
	gcc $(CFLAGS) -c src/init-mint.c -o compiled/init-mint.o

compiled/load-mint.o: src/load-mint.c 
	gcc $(CFLAGS) -c src/load-mint.c -o compiled/load-mint.o

compiled/make-mint.o: src/make-mint.c 
	gcc $(CFLAGS) -c src/make-mint.c -o compiled/make-mint.o

compiled/mint-size.o: src/mint-size.c 
	gcc $(CFLAGS) -c src/mint-size.c -o compiled/mint-size.o

compiled/set-mint.o: src/set-mint.c 
	gcc $(CFLAGS) -c src/set-mint.c -o compiled/set-mint.o

compiled/trim-mint.o: src/trim-mint.c 
	gcc $(CFLAGS) -c src/trim-mint.c -o compiled/trim-mint.o

compiled/get-absolute-mint.o: src/get-absolute-mint.c 
	gcc $(CFLAGS) -c src/get-absolute-mint.c -o compiled/get-absolute-mint.o
