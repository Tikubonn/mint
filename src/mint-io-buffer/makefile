
default:

clean:
	rm -f mint-io-buffer.h
	rm -f mint-io-buffer.lib
	rm -f compiled/init-mint-io-buffer.o
	rm -f compiled/make-mint-io-buffer.o
	rm -f compiled/free-mint-io-buffer.o
	rm -f compiled/put-mint-io-buffer.o
	rm -f compiled/extend-mint-io-buffer.o
	rm -f compiled/write-to-mint-io-buffer.o

mint-io-buffer.h: src/init-mint-io-buffer.h src/make-mint-io-buffer.h src/free-mint-io-buffer.h src/put-mint-io-buffer.h src/extend-mint-io-buffer.h src/write-to-mint-io-buffer.h
	cat src/init-mint-io-buffer.h src/make-mint-io-buffer.h src/free-mint-io-buffer.h src/put-mint-io-buffer.h src/extend-mint-io-buffer.h src/write-to-mint-io-buffer.h > mint-io-buffer.h

mint-io-buffer.lib: compiled/init-mint-io-buffer.o compiled/make-mint-io-buffer.o compiled/free-mint-io-buffer.o compiled/put-mint-io-buffer.o compiled/extend-mint-io-buffer.o compiled/write-to-mint-io-buffer.o
	ar r mint-io-buffer.lib compiled/init-mint-io-buffer.o compiled/make-mint-io-buffer.o compiled/free-mint-io-buffer.o compiled/put-mint-io-buffer.o compiled/extend-mint-io-buffer.o compiled/write-to-mint-io-buffer.o

compiled/init-mint-io-buffer.o: src/init-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/init-mint-io-buffer.c -o compiled/init-mint-io-buffer.o

compiled/make-mint-io-buffer.o: src/make-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/make-mint-io-buffer.c -o compiled/make-mint-io-buffer.o

compiled/free-mint-io-buffer.o: src/free-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/free-mint-io-buffer.c -o compiled/free-mint-io-buffer.o

compiled/put-mint-io-buffer.o: src/put-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/put-mint-io-buffer.c -o compiled/put-mint-io-buffer.o

compiled/extend-mint-io-buffer.o: src/extend-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/extend-mint-io-buffer.c -o compiled/extend-mint-io-buffer.o

compiled/write-to-mint-io-buffer.o: src/write-to-mint-io-buffer.c 
	gcc $(CFLAGS) -c src/write-to-mint-io-buffer.c -o compiled/write-to-mint-io-buffer.o
