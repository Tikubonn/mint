
export CFLAGS += -I$(CURDIR) -L$(CURDIR)

default:

clean:
	rm -f mint.dll
	rm -f compiled/test-add-mint.o
	rm -f compiled/test-sub-mint.o
	rm -f compiled/test-mul-mint.o
	rm -f compiled/test-floor-mint.o
	rm -f compiled/test-minus-mint.o
	rm -f compiled/test-div-mint.o
	rm -f compiled/test-mod-mint.o
	rm -f compiled/test-is-equal-mint.o
	rm -f compiled/test-is-unequal-mint.o
	rm -f compiled/test-is-lesser-mint.o
	rm -f compiled/test-is-lesser-or-equal-mint.o
	rm -f compiled/test-is-greater-mint.o
	rm -f compiled/test-is-greater-or-equal-mint.o
	rm -f compiled/test-not-mint.o
	rm -f compiled/test-and-mint.o
	rm -f compiled/test-or-mint.o
	rm -f compiled/test-xor-mint.o
	rm -f compiled/test-lshift-mint.o
	rm -f compiled/test-rshift-mint.o
	rm -f compiled/test-is-zero-mint.o
	rm -f compiled/test-is-positive-mint.o
	rm -f compiled/test-is-negative-mint.o

test: .always
	make test-mint-operation.exe
	./test-mint-operation.exe

mint.h: $(rootdir)/dist/mint.h
	cp $(rootdir)/dist/mint.h mint.h

mint.dll: $(rootdir)/dist/mint.dll
	cp $(rootdir)/dist/mint.dll mint.dll

test-mint-operation.exe: src/main.c compiled/test-add-mint.o compiled/test-sub-mint.o compiled/test-mul-mint.o compiled/test-floor-mint.o compiled/test-minus-mint.o compiled/test-div-mint.o compiled/test-mod-mint.o compiled/test-is-equal-mint.o compiled/test-is-unequal-mint.o compiled/test-is-lesser-mint.o compiled/test-is-lesser-or-equal-mint.o compiled/test-is-greater-mint.o compiled/test-is-greater-or-equal-mint.o compiled/test-not-mint.o compiled/test-and-mint.o compiled/test-or-mint.o compiled/test-xor-mint.o compiled/test-lshift-mint.o compiled/test-rshift-mint.o compiled/test-is-zero-mint.o compiled/test-is-positive-mint.o compiled/test-is-negative-mint.o mint.h mint.dll
	gcc $(CFLAGS) src/main.c compiled/test-add-mint.o compiled/test-sub-mint.o compiled/test-mul-mint.o compiled/test-floor-mint.o compiled/test-minus-mint.o compiled/test-div-mint.o compiled/test-mod-mint.o compiled/test-is-equal-mint.o compiled/test-is-unequal-mint.o compiled/test-is-lesser-mint.o compiled/test-is-lesser-or-equal-mint.o compiled/test-is-greater-mint.o compiled/test-is-greater-or-equal-mint.o compiled/test-not-mint.o compiled/test-and-mint.o compiled/test-or-mint.o compiled/test-xor-mint.o compiled/test-lshift-mint.o compiled/test-rshift-mint.o compiled/test-is-zero-mint.o compiled/test-is-positive-mint.o compiled/test-is-negative-mint.o -lmint -o test-mint-operation.exe

compiled/test-add-mint.o: src/test-add-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-add-mint.c -o compiled/test-add-mint.o

compiled/test-sub-mint.o: src/test-sub-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-sub-mint.c -o compiled/test-sub-mint.o

compiled/test-mul-mint.o: src/test-mul-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mul-mint.c -o compiled/test-mul-mint.o

compiled/test-floor-mint.o: src/test-floor-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-floor-mint.c -o compiled/test-floor-mint.o

compiled/test-minus-mint.o: src/test-minus-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-minus-mint.c -o compiled/test-minus-mint.o

compiled/test-div-mint.o: src/test-div-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-div-mint.c -o compiled/test-div-mint.o

compiled/test-mod-mint.o: src/test-mod-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-mod-mint.c -o compiled/test-mod-mint.o

compiled/test-is-equal-mint.o: src/test-is-equal-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-equal-mint.c -o compiled/test-is-equal-mint.o

compiled/test-is-unequal-mint.o: src/test-is-unequal-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-unequal-mint.c -o compiled/test-is-unequal-mint.o

compiled/test-is-lesser-mint.o: src/test-is-lesser-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-lesser-mint.c -o compiled/test-is-lesser-mint.o

compiled/test-is-lesser-or-equal-mint.o: src/test-is-lesser-or-equal-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-lesser-or-equal-mint.c -o compiled/test-is-lesser-or-equal-mint.o

compiled/test-is-greater-mint.o: src/test-is-greater-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-greater-mint.c -o compiled/test-is-greater-mint.o

compiled/test-is-greater-or-equal-mint.o: src/test-is-greater-or-equal-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-greater-or-equal-mint.c -o compiled/test-is-greater-or-equal-mint.o

compiled/test-not-mint.o: src/test-not-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-not-mint.c -o compiled/test-not-mint.o

compiled/test-and-mint.o: src/test-and-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-and-mint.c -o compiled/test-and-mint.o

compiled/test-or-mint.o: src/test-or-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-or-mint.c -o compiled/test-or-mint.o

compiled/test-xor-mint.o: src/test-xor-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-xor-mint.c -o compiled/test-xor-mint.o

compiled/test-lshift-mint.o: src/test-lshift-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-lshift-mint.c -o compiled/test-lshift-mint.o

compiled/test-rshift-mint.o: src/test-rshift-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-rshift-mint.c -o compiled/test-rshift-mint.o

compiled/test-is-zero-mint.o: src/test-is-zero-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-zero-mint.c -o compiled/test-is-zero-mint.o

compiled/test-is-positive-mint.o: src/test-is-positive-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-positive-mint.c -o compiled/test-is-positive-mint.o

compiled/test-is-negative-mint.o: src/test-is-negative-mint.c mint.h mint.dll
	gcc $(CFLAGS) -c src/test-is-negative-mint.c -o compiled/test-is-negative-mint.o

.always:
