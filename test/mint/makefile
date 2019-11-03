
export CFLAGS += -I$(CURDIR) -L$(CURDIR)

default:

clean:
	rm -f mint.dll
	rm -f compiled/test-mint.o

test: .always
	make test-mint.exe
	./test-mint.exe

mint.h: $(rootdir)/dist/mint.h
	cp $(rootdir)/dist/mint.h mint.h

mint.dll: $(rootdir)/dist/mint.dll
	cp $(rootdir)/dist/mint.dll mint.dll

test-mint.exe: src/main.c compiled/test-mint.o compiled/test-copy-mint.o mint.h mint.dll
	gcc $(CFLAGS) src/main.c compiled/test-mint.o compiled/test-copy-mint.o -lmint -o test-mint.exe

compiled/test-mint.o: src/test-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mint.c -o compiled/test-mint.o

compiled/test-copy-mint.o: src/test-copy-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-copy-mint.c -o compiled/test-copy-mint.o

.always:
