
export CFLAGS += -I$(CURDIR)

default:

clean: .always
	rm -f mint.h
	rm -f mint.lib
	rm -f mint.dll
	make clean -C mint
	make clean -C mint-operation
	make clean -C mint-temporarily

h: .always
	make mint.h -C mint
	make mint-operation.h -C mint-operation
	make mint-temporarily.h -C mint-temporarily
	make mint.h

lib: .always
	make mint.lib -C mint
	make mint-operation.lib -C mint-operation
	make mint.lib

dll: .always
	make mint.lib -C mint
	make mint-operation.lib -C mint-operation
	make mint.dll

mint.h: mint.p mint/mint.h mint-operation/mint-operation.h mint-temporarily/mint-temporarily.h
	cat mint.p mint/mint.h mint-operation/mint-operation.h mint-temporarily/mint-temporarily.h > mint.h

workdir := $(CURDIR)
tempdir = $(shell mktemp -d)

mint.lib: mint/mint.lib mint-operation/mint-operation.lib 
	cd $(tempdir) && \
	ar x $(workdir)/mint/mint.lib && \
	ar x $(workdir)/mint-operation/mint-operation.lib && \
	ar r $(workdir)/mint.lib *.o

mint.dll: mint/mint.lib mint-operation/mint-operation.lib 
	cd $(tempdir) && \
	ar x $(workdir)/mint/mint.lib && \
	ar x $(workdir)/mint-operation/mint-operation.lib && \
	gcc $(CFLAGS) *.o -shared -o $(workdir)/mint.dll

.always:
