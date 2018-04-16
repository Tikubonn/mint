
all:
	make manual.lib

clean:
	rm -f compiled/init_mint.o 
	rm -f compiled/clear_mint.o 
	rm -f compiled/size_mint.o
	rm -f compiled/get_mint.o
	rm -f compiled/set_mint.o 
	rm -f compiled/load_mint.o 
	rm -f compiled/copy_mint_manually.o 
	rm -f compiled/not_mint_manually.o
	rm -f compiled/and_mint_manually.o
	rm -f compiled/or_mint_manually.o
	rm -f compiled/xor_mint_manually.o
	rm -f compiled/add_mint_manually.o
	rm -f compiled/sub_mint_manually.o
	rm -f compiled/mul_mint_manually.o
	rm -f compiled/floor_mint_manually.o
	rm -f compiled/is_positive_mint.o
	rm -f compiled/is_negative_mint.o
	rm -f compiled/cast_mint.o
	rm -f compiled/is_equal_mint.o
	rm -f compiled/is_greater_mint.o
	rm -f compiled/is_greater_or_equal_mint.o
	rm -f compiled/is_lesser_mint.o
	rm -f compiled/is_lesser_or_equal_mint.o
	rm -f compiled/is_unequal_mint.o
	rm -f compiled/trim_mint.o
	rm -f compiled/is_zero_mint.o
	
manual.lib: compiled/init_mint.o compiled/clear_mint.o compiled/size_mint.o compiled/get_mint.o compiled/set_mint.o compiled/load_mint.o compiled/copy_mint_manually.o compiled/not_mint_manually.o compiled/and_mint_manually.o compiled/or_mint_manually.o compiled/xor_mint_manually.o compiled/add_mint_manually.o compiled/sub_mint_manually.o compiled/mul_mint_manually.o compiled/floor_mint_manually.o compiled/is_positive_mint.o compiled/is_negative_mint.o compiled/cast_mint.o compiled/is_equal_mint.o compiled/is_greater_mint.o compiled/is_greater_or_equal_mint.o compiled/is_lesser_mint.o compiled/is_lesser_or_equal_mint.o compiled/is_unequal_mint.o compiled/trim_mint.o compiled/is_zero_mint.o
	ar r manual.lib compiled/init_mint.o compiled/clear_mint.o compiled/size_mint.o compiled/get_mint.o compiled/set_mint.o compiled/load_mint.o compiled/copy_mint_manually.o compiled/not_mint_manually.o compiled/and_mint_manually.o compiled/or_mint_manually.o compiled/xor_mint_manually.o compiled/add_mint_manually.o compiled/sub_mint_manually.o compiled/mul_mint_manually.o compiled/floor_mint_manually.o compiled/is_positive_mint.o compiled/is_negative_mint.o compiled/cast_mint.o compiled/is_equal_mint.o compiled/is_greater_mint.o compiled/is_greater_or_equal_mint.o compiled/is_lesser_mint.o compiled/is_lesser_or_equal_mint.o compiled/is_unequal_mint.o compiled/trim_mint.o compiled/is_zero_mint.o

compiled/init_mint.o: src/init_mint.c
	$(CC) $(CFLAGS) -c src/init_mint.c -o compiled/init_mint.o
	
compiled/clear_mint.o: src/clear_mint.c
	$(CC) $(CFLAGS) -c src/clear_mint.c -o compiled/clear_mint.o
	
compiled/size_mint.o: src/size_mint.c
	$(CC) $(CFLAGS) -c src/size_mint.c -o compiled/size_mint.o
	
compiled/get_mint.o: src/get_mint.c
	$(CC) $(CFLAGS) -c src/get_mint.c -o compiled/get_mint.o

compiled/set_mint.o: src/set_mint.c
	$(CC) $(CFLAGS) -c src/set_mint.c -o compiled/set_mint.o

compiled/load_mint.o: src/load_mint.c
	$(CC) $(CFLAGS) -c src/load_mint.c -o compiled/load_mint.o

compiled/copy_mint_manually.o: src/copy_mint_manually.c
	$(CC) $(CFLAGS) -c src/copy_mint_manually.c -o compiled/copy_mint_manually.o

compiled/not_mint_manually.o: src/not_mint_manually.c
	$(CC) $(CFLAGS) -c src/not_mint_manually.c -o compiled/not_mint_manually.o

compiled/and_mint_manually.o: src/and_mint_manually.c
	$(CC) $(CFLAGS) -c src/and_mint_manually.c -o compiled/and_mint_manually.o

compiled/or_mint_manually.o: src/or_mint_manually.c
	$(CC) $(CFLAGS) -c src/or_mint_manually.c -o compiled/or_mint_manually.o

compiled/xor_mint_manually.o: src/xor_mint_manually.c
	$(CC) $(CFLAGS) -c src/xor_mint_manually.c -o compiled/xor_mint_manually.o

compiled/add_mint_manually.o: src/add_mint_manually.c
	$(CC) $(CFLAGS) -c src/add_mint_manually.c -o compiled/add_mint_manually.o

compiled/sub_mint_manually.o: src/sub_mint_manually.c
	$(CC) $(CFLAGS) -c src/sub_mint_manually.c -o compiled/sub_mint_manually.o

compiled/mul_mint_manually.o: src/mul_mint_manually.c
	$(CC) $(CFLAGS) -c src/mul_mint_manually.c -o compiled/mul_mint_manually.o

compiled/floor_mint_manually.o: src/floor_mint_manually.c
	$(CC) $(CFLAGS) -c src/floor_mint_manually.c -o compiled/floor_mint_manually.o

compiled/is_positive_mint.o: src/is_positive_mint.c
	$(CC) $(CFLAGS) -c src/is_positive_mint.c -o compiled/is_positive_mint.o

compiled/is_negative_mint.o: src/is_negative_mint.c
	$(CC) $(CFLAGS) -c src/is_negative_mint.c -o compiled/is_negative_mint.o

compiled/cast_mint.o: src/cast_mint.c
	$(CC) $(CFLAGS) -c src/cast_mint.c -o compiled/cast_mint.o

compiled/is_equal_mint.o: src/is_equal_mint.c
	$(CC) $(CFLAGS) -c src/is_equal_mint.c -o compiled/is_equal_mint.o

compiled/is_greater_mint.o: src/is_greater_mint.c
	$(CC) $(CFLAGS) -c src/is_greater_mint.c -o compiled/is_greater_mint.o

compiled/is_greater_or_equal_mint.o: src/is_greater_or_equal_mint.c
	$(CC) $(CFLAGS) -c src/is_greater_or_equal_mint.c -o compiled/is_greater_or_equal_mint.o

compiled/is_lesser_mint.o: src/is_lesser_mint.c
	$(CC) $(CFLAGS) -c src/is_lesser_mint.c -o compiled/is_lesser_mint.o

compiled/is_lesser_or_equal_mint.o: src/is_lesser_or_equal_mint.c
	$(CC) $(CFLAGS) -c src/is_lesser_or_equal_mint.c -o compiled/is_lesser_or_equal_mint.o

compiled/is_unequal_mint.o: src/is_unequal_mint.c
	$(CC) $(CFLAGS) -c src/is_unequal_mint.c -o compiled/is_unequal_mint.o

compiled/trim_mint.o: src/trim_mint.c
	$(CC) $(CFLAGS) -c src/trim_mint.c -o compiled/trim_mint.o

compiled/is_zero_mint.o: src/is_zero_mint.c
	$(CC) $(CFLAGS) -c src/is_zero_mint.c -o compiled/is_zero_mint.o
