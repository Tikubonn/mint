
export CFLAGS += -g
export rootdir := $(CURDIR)

all: .always
	make h
	make lib
	make dll

clean: .always
	make clean -C src

test: .always
	make all
	make test -C test

h: .always
	make h -C src
	make dist/mint.h

lib: .always
	make lib -C src
	make dist/mint.lib

dll: .always
	make dll -C src
	make dist/mint.dll

dist/mint.h: src/mint.h
	cp src/mint.h dist/mint.h

dist/mint.lib: src/mint.lib
	cp src/mint.lib dist/mint.lib

dist/mint.dll: src/mint.dll
	cp src/mint.dll dist/mint.dll

.always:
