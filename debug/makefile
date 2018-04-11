
all: debug.lib debug.dll
	make debug.lib 
	make debug.dll

clean: 
	rm -f debug.o

debug.dll: debug.o
	gcc $(CFLAGS) -shared debug.o -o debug.dll
	
debug.lib: debug.o
	ar r debug.lib debug.o

debug.o: debug.c
	gcc $(CFLAGS) -c debug.c 
