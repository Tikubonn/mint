
all: debug.lib debug.dll
	make debug.lib 
	make debug.dll

clean: 
	rm -f debug.o

debug.dll: debug.o
	$(CC) $(CFLAGS) -shared debug.o $(ROOTDIR)/auto/auto.dll $(ROOTDIR)/manual/manual.dll -o debug.dll

debug.lib: debug.o
	ar r debug.lib debug.o

debug.o: debug.c
	$(CC) $(CFLAGS) -c debug.c 
