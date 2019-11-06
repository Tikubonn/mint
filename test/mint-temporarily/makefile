
export CFLAGS += -I$(CURDIR) -L$(CURDIR)

default:

clean:
	rm -f mint.dll
	rm -f compiled/test-mint-temporarily.o
	rm -f compiled/test-copy-mint-temporarily.o

test: .always
	make test-mint-temporarily.exe
	./test-mint-temporarily.exe

mint.h: $(rootdir)/dist/mint.h
	cp $(rootdir)/dist/mint.h mint.h

mint.dll: $(rootdir)/dist/mint.dll
	cp $(rootdir)/dist/mint.dll mint.dll

test-mint-temporarily.exe: src/main.c compiled/test-mint-temporarily.o compiled/test-copy-mint-temporarily.o mint.h mint.dll
	gcc $(CFLAGS) src/main.c compiled/test-mint-temporarily.o compiled/test-copy-mint-temporarily.o -lmint -o test-mint-temporarily.exe

compiled/test-mint-temporarily.o: src/test-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mint-temporarily.c -o compiled/test-mint-temporarily.o

compiled/test-copy-mint-temporarily.o: src/test-copy-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-copy-mint-temporarily.c -o compiled/test-copy-mint-temporarily.o

.always:
