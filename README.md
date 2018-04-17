# mint
mint provide multiple length integer for C. becareful! this is not speedy and safety!  
in this library, multiple length integer's structure is not separated sign and value that like as pure integer in C.
you can use another library that more faster and safety if you want use this for your application :D

```c
mint *numa = make_mint_from_long(1111111111);
mint *numb = make_mint_from_long(1234567890);
mint *numc = mul_mint(numa, numb);
mint *numd = div_mint(numc, numa);
printf("%ld\n", cast_mint_to_long(numd)); // 1234567890
```

# API

## Manual Functions 
those functions does not allocate memory automatically.  
so you should prepare working memory yourself. 
for example if calculate the multiplication, you should allocate a memory space that size is double.
if you want to management mint by GC, those functions are useful.
but normally [Automatic Functions](#automatic-functions) are easier to use than those.

```c
mint_cell num1data[4];
mint num1;
mint_cell num2data[4];
mint num2;
mint_cell num3data[4 + 1];
mint num3;
init_mint(num1data, sizeof(num1data) / sizeof(mint_cell), &num1);
init_mint(num2data, sizeof(num2data) / sizeof(mint_cell), &num2);
init_mint(num3data, sizeof(num3data) / sizeof(mint_cell), &num3);
load_mint_from_int(2525, &num1);
load_mint_from_int(2828, &num2);
add_mint_manually(&num1, &num2, &num3);
return cast_mint_to_int(&num3); // 5353
```

| Function | Description | 
---- | ----
| `void init_mint (mint_cell*, unsigned long, *numin)` | construct a mint structure from arguments. | 
| `void set_mint (mint_cell, unsigned long, unsigned int, mint*)` | set a value to inner of range of mint structure. | 
| `mint_cell get_mint (unsigned long, unsigned int, mint*)` | get a cell value from mint structure. if you accessed out of range, this function return a filled integer by `0` or `1`. | 
| `unsigned long size_mint (mint*)` | return a size of cell array. | 
| `void clear_mint (mint*)` | fill the zero to all cell. | 
| `void copy_mint_manually (mint*, mint*)` | copy a cell sequence contents to second argument. if second argument dont have enough space, piece of data will be missing. | 
| `void load_mint_from_int (int, mint*)` | load a value to second argument from integer value. second argument size should be over the size of int. | 
| `void load_mint_from_long (long, mint*)` | load a value to second argument from integer value. second argument size should be over the size of long. | 
| `int cast_mint_to_int (mint*)` | convert a mint structure to C signed integer. if argument is not negative, this function overwrite `0` to top bit. *becareful!* if argument value size was over than C integer, this function return a value that is sliced to size of C integer. |
| `unsigned int cast_mint_to_uint (mint*)` | convert a mint structure to C signed integer. *becareful!* if argument value size was over than C integer, this function return a value that is sliced to size of C integer. |
| `long cast_mint_to_long (mint*)` | convert a mint structure to C signed integer. if argument is not negative, this function overwrite `0` to top bit. *becareful!* if argument value size was over than C integer, this function return a value that is sliced to size of C integer. | 
| `unsigned long cast_mint_to_ulong (mint*)` | convert a mint structure to C signed integer. *becareful!* if argument value size was over than C integer, this function return a value that is sliced to size of C integer. | 
| `void and_mint_manually (mint*, mint*, mint* output)` | this function write to third argument what is calculation result of `AND` by first two arguments. if third argument dose not have enough space, part of data will be missing. | 
| `void or_mint_manually (mint*, mint*, mint* output)` | this function write to third argument what is calculation result of `OR` by first two arguments. if third argument dose not have enough space, part of data will be missing. | 
| `void xor_mint_manually (mint*, mint*, mint* output)` | this function write to third argument what is calculation result of `XOR` by first two arguments. if third argument dose not have enough space, part of data will be missing. |
| `void not_mint_manually (mint*, mint*, mint* output)` | this function write to second argument what is calculation result of `NOT` by first arguments. if second argument dose not have enough space, part of data will be missing. | 
| `void add_mint_manually (mint*, mint*, mint* output)` | this function write to second argument what is calculation result of `+` by first arguments. if second argument dose not have enough space, part of data will be missing. |
| `void sub_mint_manually (mint*, mint*, mint* output)` | this function write to second argument what is calculation result of `-` by first arguments. if second argument dose not have enough space, part of data will be missing. |
| `void mul_mint_manually (mint*, mint*, mint* output)` | this function write to second argument what is calculation result of `*` by first arguments. if second argument dose not have enough space, part of data will be missing. |
| `int floor_mint_manually (mint *modinout, mint*, mint *divout)` | this function write to `modinout` and third argument what is calculation result of `division` by `modinout` and second argument. `modinout` use to input and output. so this function has a side effect. this function will return an integer. if you tried dividing number by `0`, this cause the zero division exception then will return `non zero` integer immediately. if this function was success, this function return `0`. *becareful!* this function has not suported calculation by negative number. |
| `int is_equal_mint (mint*, mint*)` | this function return a integer that is `1` if two arguments is equal, otherwise `0`. | 
| `int is_greater_mint (mint*, mint*)` | this function return a integer that is `1` if first argument is greater than second argument, otherwise `0`. | 
| `int is_greater_or_equal_mint (mint*, mint*)` | this function return a integer that is `1` if first argument is greater or equal than second argument, otherwise `0`. | 
| `int is_lesser_mint (mint*, mint*)` | this function return a integer that is `1` if first argument is lesser than second argument, otherwise `0`. | 
| `int is_lesser_or_equal_mint (mint*, mint*)` | this function return a integer that is `1` if first argument is lesser or equal than second argument, otherwise `0`. | 
| `int is_unequal_mint (mint*, mint*)` | this function return a integer that is `1` if two arguments is not equal, otherwise `0`. | 
| `int is_zero_mint (mint*)` | this function return a integer that is `1` if argument is `0`, otherwise `0`. |
| `void trim_mint (mint*)` | trim the empty cells of mint instance. this is used to some functions in this library. |

## Automatic Functions 
those functions allocate memory automatically with `malloc`.  
but this library does not have GC, so you should release manually the unnecessary instance.
if you want to make a temporary instance, you can use [Temporary Macros](#temporary-macros).

```c
mint *num1 = make_mint_from_int(2525);
mint *num2 = make_mint_from_int(2828);
mint *num3 = add_mint(num1, num2);
free_mint(num1); // release manually
free_mint(num2); // release manually
return num3;
```

| Function | Description | 
---- | ----
| `mint *make_mint (unsigned long size)` | make a new empty instance that size is argument of `size`. |
| `mint *make_mint_from_int (int)` | make a new instance from C integer. |
| `mint *make_mint_from_long (long)` | make a new instance from C integer. |
| `void free_mint (mint*)` | free a memory space that is used by instance. |
| `mint *copy_mint (mint*)` | make a copied instance of argument. |
| `mint *and_mint (mint*, mint*)` | return a calculation result of `AND` as new instance. |
| `mint *or_mint (mint*, mint*)` | return a calculation result of `OR` as new instance. |
| `mint *xor_mint (mint*, mint*)` | return a calculation result of `XOR` as new instance. |
| `mint *not_mint (mint*, mint*)` | return a calculation result of `NOT` as new instance. |
| `mint *add_mint (mint*, mint*)` | return a calculation result of `+` as new instance. |
| `mint *sub_mint (mint*, mint*)` | return a calculation result of `-` as new instance. |
| `mint *mul_mint (mint*, mint*)` | return a calculation result of `*` as new instance. |
| `void floor_mint (mint*, mint*, mint** divout, mint** modout)` | assign to arguments of `divout` and `modout` what is calculation results of `/` and `%` as new instance. if second argument is `0`, this function cause zero division exception then return non zero integer immediately. otherwise normally this function return `0`. |
| `mint *div_mint (mint*, mint*)` | return a calculation result of `/` as new instance. if second argument is 0, this function cause zero division exception then return the `NULL` immediately. |
| `mint *mod_mint (mint*, mint*)` | return a calculation result of `%` as new instance. if second argument is 0, this function cause zero division exception then return the `NULL` immediately. |

## Temporary Macros
those macros allocate memory from stack frame.  
so created instance will be released automatically when exit from current scope. 
it is useful for management of temporary instance.
but those function has possibility that cause segmentation error when not enough memory.

```c
make_tmp_mint_from_int(num1, 2525);
make_tmp_mint_from_int(num2, 2828);
add_tmp_mint_from_int(num3, num1, num2);
mint *numexp = copy_mint(num3); // if you want to keep calculation result after exit from current stack frame, you should copy with automatic or manual function.
return numexp;
```

| Macro | Description | 
---- | ---- 
| `make_tmp_mint (var, unsigned long size)` | assign a new empty instance from stack frame to `var`. that length is argument of `size`. | 
| `make_tmp_mint_from_int (var, int)` | assign a new instance from stack frame to `var`. that value is a second argument. | 
| `make_tmp_mint_from_long (var, long)` | assign a new instance from stack frame to `var`. that value is a second argument. | 
| `copy_tmp_mint (var, mint*)` | assign a new instance from stack frame to `var`. that is copied instance of  second argument. | 
| `and_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `AND` by last two arguments. | 
| `or_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `OR` by last two arguments. | 
| `xor_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `XOR` by last two arguments. | 
| `not_tmp_mint (var, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `NOT` by last argument. | 
| `add_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `+` by last argument. | 
| `sub_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `-` by last argument. | 
| `mul_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `*` by last argument. | 
| `floor_tmp_mint (var_div, var_mod, mint*, mint*)` | assign new instances from stack frame to `var_div` and `var_mod`. that is a calculation result of `/` and `%` by last two arguments. | 
| `div_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `/` by last argument. | 
| `mod_tmp_mint (var, mint*, mint*)` | assign a new instance from stack frame to `var`. that is a calculation result of `%` by last argument. | 

# Licence
this library released under the MIT Licence.
