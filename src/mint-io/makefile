
default:

clean:
	rm -f mint-io.h
	rm -f mint-io.lib
	rm -f compiled/write-decimal-mint.o
	rm -f compiled/print-mint.o
	rm -f compiled/print-mintln.o

mint-io.h: src/write-decimal-mint.h src/print-mint.h src/print-mintln.h
	cat src/write-decimal-mint.h src/print-mint.h src/print-mintln.h > mint-io.h

mint-io.lib: compiled/write-decimal-mint.o compiled/print-mint.o compiled/print-mintln.o
	ar r mint-io.lib compiled/write-decimal-mint.o compiled/print-mint.o compiled/print-mintln.o

compiled/write-decimal-mint.o: src/write-decimal-mint.c 
	gcc $(CFLAGS) -c src/write-decimal-mint.c -o compiled/write-decimal-mint.o

compiled/print-mint.o: src/print-mint.c 
	gcc $(CFLAGS) -c src/print-mint.c -o compiled/print-mint.o

compiled/print-mintln.o: src/print-mintln.c 
	gcc $(CFLAGS) -c src/print-mintln.c -o compiled/print-mintln.o
