export ROOTDIR = $(CURDIR)
export CFLAGS = -I$(CURDIR) -L$(CURDIR) -fPIC
export CC = gcc 

all: 
	make -C manual 
	make -C auto
	make -C debug
	make dist/mint.dll
	make dist/mint.lib
	make test.exe

clean:
	make clean -C manual
	make clean -C auto
	make clean -C debug
	
tmp = $(shell mktemp -d)
	
dist/mint.dll: auto/auto.lib manual/manual.dll debug/debug.lib 
	cd $(tmp) && \
ar x $(ROOTDIR)/auto/auto.lib && \
ar x $(ROOTDIR)/manual/manual.lib && \
ar x $(ROOTDIR)/debug/debug.lib && \
$(CC) $(CFLAGS) -shared *.o -o $(ROOTDIR)/dist/mint.dll
	
dist/mint.lib: auto/auto.lib manual/manual.dll debug/debug.lib 
	cd $(tmp) && \
ar x $(ROOTDIR)/auto/auto.lib && \
ar x $(ROOTDIR)/manual/manual.lib && \
ar x $(ROOTDIR)/debug/debug.lib && \
ar r $(ROOTDIR)/dist/mint.lib *.o

test.exe: test.c dist/mint.lib
	$(CC) $(CFLAGS) test.c dist/mint.lib -o test.exe
