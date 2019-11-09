
export CFLAGS += -I$(CURDIR)

default:

clean: .always
	rm -f mint.h
	rm -f mint.lib
	rm -f mint.dll
	make clean -C mint
	make clean -C mint-operation
	make clean -C mint-temporarily
	make clean -C mint-io-buffer
	make clean -C mint-io

h: .always
	make mint.h -C mint
	make mint-operation.h -C mint-operation
	make mint-temporarily.h -C mint-temporarily
	make mint-io-buffer.h -C mint-io-buffer
	make mint-io.h -C mint-io
	make mint.h

lib: .always
	make mint.lib -C mint
	make mint-operation.lib -C mint-operation
	make mint-io-buffer.lib -C mint-io-buffer
	make mint-io.lib -C mint-io
	make mint.lib

dll: .always
	make mint.lib -C mint
	make mint-operation.lib -C mint-operation
	make mint-io-buffer.lib -C mint-io-buffer
	make mint-io.lib -C mint-io
	make mint.dll

mint.h: mint.p mint/mint.h mint-operation/mint-operation.h mint-temporarily/mint-temporarily.h mint-io-buffer/mint-io-buffer.h mint-io/mint-io.h
	cat mint.p mint/mint.h mint-operation/mint-operation.h mint-temporarily/mint-temporarily.h mint-io-buffer/mint-io-buffer.h mint-io/mint-io.h > mint.h

workdir := $(CURDIR)
tempdir = $(shell mktemp -d)

mint.lib: mint/mint.lib mint-operation/mint-operation.lib mint-io-buffer/mint-io-buffer.lib mint-io/mint-io.lib
	cd $(tempdir) && \
	ar x $(workdir)/mint/mint.lib && \
	ar x $(workdir)/mint-operation/mint-operation.lib && \
	ar x $(workdir)/mint-io-buffer/mint-io-buffer.lib && \
	ar x $(workdir)/mint-io/mint-io.lib && \
	ar r $(workdir)/mint.lib *.o

mint.dll: mint/mint.lib mint-operation/mint-operation.lib mint-io-buffer/mint-io-buffer.lib mint-io/mint-io.lib
	cd $(tempdir) && \
	ar x $(workdir)/mint/mint.lib && \
	ar x $(workdir)/mint-operation/mint-operation.lib && \
	ar x $(workdir)/mint-io-buffer/mint-io-buffer.lib && \
	ar x $(workdir)/mint-io/mint-io.lib && \
	gcc $(CFLAGS) *.o -shared -o $(workdir)/mint.dll

.always:
