
all: 
	make debug.lib 

clean: 
	rm -f debug.o

debug.lib: debug.o
	ar r debug.lib debug.o

debug.o: debug.c
	$(CC) $(CFLAGS) -c debug.c 
