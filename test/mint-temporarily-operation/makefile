
export CFLAGS += -I$(CURDIR) -L$(CURDIR)

default:

clean:
	rm -f mint.dll
	rm -f compiled/test-add-mint-temporarily.o
	rm -f compiled/test-sub-mint-temporarily.o
	rm -f compiled/test-mul-mint-temporarily.o
	rm -f compiled/test-floor-mint-temporarily.o
	rm -f compiled/test-minus-mint-temporarily.o
	rm -f compiled/test-div-mint-temporarily.o
	rm -f compiled/test-mod-mint-temporarily.o
	rm -f compiled/test-not-mint-temporarily.o
	rm -f compiled/test-and-mint-temporarily.o
	rm -f compiled/test-or-mint-temporarily.o
	rm -f compiled/test-xor-mint-temporarily.o
	rm -f compiled/test-lshift-mint-temporarily.o
	rm -f compiled/test-rshift-mint-temporarily.o

test: .always
	make test-mint-temporarily-operation.exe
	./test-mint-temporarily-operation.exe

mint.h: $(rootdir)/dist/mint.h
	cp $(rootdir)/dist/mint.h mint.h

mint.dll: $(rootdir)/dist/mint.dll
	cp $(rootdir)/dist/mint.dll mint.dll

test-mint-temporarily-operation.exe: src/main.c compiled/test-add-mint-temporarily.o compiled/test-sub-mint-temporarily.o compiled/test-mul-mint-temporarily.o compiled/test-floor-mint-temporarily.o compiled/test-minus-mint-temporarily.o compiled/test-div-mint-temporarily.o compiled/test-mod-mint-temporarily.o compiled/test-not-mint-temporarily.o compiled/test-and-mint-temporarily.o compiled/test-or-mint-temporarily.o compiled/test-xor-mint-temporarily.o compiled/test-lshift-mint-temporarily.o compiled/test-rshift-mint-temporarily.o mint.h mint.dll
	gcc $(CFLAGS) src/main.c compiled/test-add-mint-temporarily.o compiled/test-sub-mint-temporarily.o compiled/test-mul-mint-temporarily.o compiled/test-floor-mint-temporarily.o compiled/test-minus-mint-temporarily.o compiled/test-div-mint-temporarily.o compiled/test-mod-mint-temporarily.o compiled/test-not-mint-temporarily.o compiled/test-and-mint-temporarily.o compiled/test-or-mint-temporarily.o compiled/test-xor-mint-temporarily.o compiled/test-lshift-mint-temporarily.o compiled/test-rshift-mint-temporarily.o -lmint -o test-mint-temporarily-operation.exe

compiled/test-add-mint-temporarily.o: src/test-add-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-add-mint-temporarily.c -o compiled/test-add-mint-temporarily.o

compiled/test-sub-mint-temporarily.o: src/test-sub-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-sub-mint-temporarily.c -o compiled/test-sub-mint-temporarily.o

compiled/test-mul-mint-temporarily.o: src/test-mul-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mul-mint-temporarily.c -o compiled/test-mul-mint-temporarily.o

compiled/test-floor-mint-temporarily.o: src/test-floor-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-floor-mint-temporarily.c -o compiled/test-floor-mint-temporarily.o

compiled/test-minus-mint-temporarily.o: src/test-minus-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-minus-mint-temporarily.c -o compiled/test-minus-mint-temporarily.o

compiled/test-div-mint-temporarily.o: src/test-div-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-div-mint-temporarily.c -o compiled/test-div-mint-temporarily.o

compiled/test-mod-mint-temporarily.o: src/test-mod-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mod-mint-temporarily.c -o compiled/test-mod-mint-temporarily.o

compiled/test-not-mint-temporarily.o: src/test-not-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-not-mint-temporarily.c -o compiled/test-not-mint-temporarily.o

compiled/test-and-mint-temporarily.o: src/test-and-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-and-mint-temporarily.c -o compiled/test-and-mint-temporarily.o

compiled/test-or-mint-temporarily.o: src/test-or-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-or-mint-temporarily.c -o compiled/test-or-mint-temporarily.o

compiled/test-xor-mint-temporarily.o: src/test-xor-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-xor-mint-temporarily.c -o compiled/test-xor-mint-temporarily.o

compiled/test-lshift-mint-temporarily.o: src/test-lshift-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-lshift-mint-temporarily.c -o compiled/test-lshift-mint-temporarily.o

compiled/test-rshift-mint-temporarily.o: src/test-rshift-mint-temporarily.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-rshift-mint-temporarily.c -o compiled/test-rshift-mint-temporarily.o

.always:
