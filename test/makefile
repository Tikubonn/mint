
export CFLAGS += -I$(CURDIR)

default:

clean:
	make clean -C mint
	make clean -C mint-operation
	make clean -C mint-temporarily
	make clean -C mint-temporarily-operation
	
test:
	make test -C mint
	make test -C mint-operation
	make test -C mint-temporarily
	make test -C mint-temporarily-operation
