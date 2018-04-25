
all: 
	make debug.lib 

clean: 
	rm -f compiled/print_mint.o

debug.lib: compiled/print_mint.o
	ar r debug.lib compiled/print_mint.o

compiled/print_mint.o: src/print_mint.c
	$(CC) $(CFLAGS) -c src/print_mint.c -o compiled/print_mint.o
