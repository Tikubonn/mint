export ROOTDIR = $(CURDIR)
export CFLAGS = -I$(CURDIR) -L$(CURDIR)

all: 
	make -C manual 
	make -C auto
	make -C debug
	make test.exe

clean:
	make clean -C manual
	make clean -C auto
	make clean -C debug
	
test.exe: test.c auto/auto.lib manual/manual.lib debug/debug.lib
	gcc $(CFLAGS) test.c auto/auto.lib manual/manual.lib debug/debug.lib -o test.exe
