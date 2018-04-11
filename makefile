export ROOTDIR = $(CURDIR)
export CFLAGS = -I$(CURDIR) -L$(CURDIR)

all: 
	make -C manual 
	make -C auto
	make -C debug
	make main.exe

clean:
	make clean -C manual
	make clean -C auto
	make clean -C debug
	
main.exe: main.c auto/auto.lib manual/manual.lib debug/debug.lib
	gcc $(CFLAGS) main.c auto/auto.lib manual/manual.lib debug/debug.lib -o main.exe
