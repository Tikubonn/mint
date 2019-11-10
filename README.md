
# Mint 

\| [日本語](README.ja.md) \| English \| 

![](https://img.shields.io/badge/License-GPLv3-green)

Mint is a library that provide the multiple length arithmetic.
it be written in C language.

this library has supported the arithmetic operation, comparing operation and arithmetic shift operation.
this has not supported logical shift operation because of specification of library.
this library provide many functions for one arithmetic operation, for example saving calculation result to allocated memory by dynamically, saving calculation result to stack frame and saving calculation result to allocated memory by manually.

## Usage

this example, calculate fibonacci number and display, until 1000th.

```c
#include <mint.h>
#include <stdio.h>

mint *fibo (mint *number){
  make_mint_from_int_temporarily(zero, 0);
  make_mint_from_int_temporarily(one, 1);
  if (is_equal_mint(number, zero)){
    return make_mint_from_int(0);
  }
  else
  if (is_equal_mint(number, one)){
    return make_mint_from_int(1);
  }
  else {
    mint *value1 = make_mint_from_int(1);
    mint *value2 = make_mint_from_int(0);
    mint *calculated = make_mint_from_int(0);
    mint *countup = make_mint_from_int(2);
    while (is_lesser_or_equal_mint(countup, number)){
      mint *newcalculated = add_mint(value1, value2);
      calculated = newcalculated;
      free_mint(value2);
      value2 = value1;
      value1 = calculated;
      mint *newcountup = add_mint(countup, one);
      free_mint(countup);
      countup = newcountup;
    }
    free_mint(value2);
    free_mint(countup);
    return calculated;
  }
}

int main (){
  for (int number = 0; number <= 1000; number++){
    make_mint_from_int_temporarily(nth, number);
    mint *result = fibo(nth);
    size_t wrotesize;
    if (print_mintln(result, stdout, &wrotesize) != 0){
      fprintf(stderr, "error at print_mintln\n");
      return 1;
    }
    free_mint(result);
  }
  return 0;
}
```

## API Documentation

### init_mint

```c
int init_mint (mint_cell *sequence, size_t size, mint *number);
```

this function take an array, its length and output pointer,
then initialize mint structure that referenced by pointer with arguments.
if this function success, this return 0.
if array length is 0, this return non-zero integer.

### load_mint_from_int, load_mint_from_long

```c
void load_mint_from_int (int value, mint *number);
void load_mint_from_long (long value, mint *number);
```

these functions take an integer and output pointer, then load an integer to mint structure that is referenced by pointer.
if mint structure that is referenced by pointer has not enough area for integer value, parts of integer value will be truncated.

### make_mint, make_mint_temporarily

```c
mint *make_mint (size_t size);
#define make_mint_temporarily (var, size) /* ... */
```

these functions return initialized memory area of mint structure.

make_mint function take an memory area size, then initialize new memory area that allocated dynamically, last return it.
you should call free_mint function with it, if it is unnecessary.
if this function success, return valid address.
if first argument is 0, or caused error, this return NULL.

make_mint_temporarily macro take a new variable and memory area size, then initialized new memory area that is in the stack frame, last save it to variable.
if this macro success, variable assigned valid address.
if second argument is 0, or caused error, variable assigned NULL.

### free_mint 

```c
void free_mint (mint*);
```

### make_mint_from_int, make_mint_from_long

```c
mint *make_mint_from_int (int value);
mint *make_mint_from_long (long value);
#define make_mint_from_int_temporarily (var, value) /* ... */
#define make_mint_from_long_temporarily (var, value) /* ... */
```

these functions and macro return memory area that loaded integer to it.

make_mint_from_string function take an ASCII character array and its length, 
then parse array as integer, then load it to initialized memory area that allocated dynamically, last return it.
if first character in array is "-", this function try parsing array as negative integer.
if first character in array is "+", or otherwise, this function try parsing array as positive integer.
if this function success, this return valid address.
if array length is 0, or caused error, this return NULL.

make_mint_from_int_temporarily and make_mint_from_long_temporarily macros take a new variable and integer, 
then load second argument to initialized memory area, last assign it to new variable.
if this function success, variable assigned valid address.
otherwise, return NULL.

### make_mint_from_string, make_mint_from_string0

```c
mint *make_mint_from_string (char *sequence, size_t size);
mint *make_mint_from_string0 (char *sequence);
```

these functions convert an ASCII character array to multiple length integer.

make_mint_from_string function take an ASCII character array and its length, then return allocated memory area that parsed character array as number.
if first character is "-", this function try parsing character array as negative number.
if first character is "+" or other, this function try parsing character array as positive number.
if function success, this return valid pointer.
if array length is 0, or caused error in the processing, this return NULL.

make_mint_from_string0 function is similar as make_mint_from_string except for take only ASCII array that last element is "\0".

### add_mint, add_mint_manually, add_mint_temporarily

```c
mint *add_mint (mint *number1, mint *number2);
void add_mint_manually (mint *number1, mint *number2, mint *result);
#define add_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro add numbers.

add_mint function take two numbers, 
then calculate addition by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

add_mint_manually function take two numbers and output pointer,
then calculate addition by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

add_mint_temporarily macro take a new variable and two numbers, 
then calculate addition by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### sub_mint, sub_mint_manually, sub_mint_temporarily

```c
mint *sub_mint (mint *number1, mint *number2);
void sub_mint_manually (mint *number1, mint *number2, mint *result);
#define sub_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro subtract numbers.

sub_mint function take two numbers, 
then calculate subtraction by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

sub_mint_manually function take two numbers and output pointer,
then calculate subtraction by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

sub_mint_temporarily macro take a new variable and two numbers, 
then calculate subtraction by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### mul_mint, mul_mint_manually, mul_mint_temporarily

```c
mint *mul_mint (mint *number1, mint *number2);
void mul_mint_manually (mint *number1, mint *number2, mint *result);
#define mul_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro multiply numbers.

mul_mint function take two numbers, 
then calculate multiplication by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

mul_mint_manually function take two numbers and output pointer,
then calculate multiplication by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

mul_mint_temporarily macro take a new variable and two numbers, 
then calculate multiplication by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### floor_mint, floor_mint_manually, floor_mint_temporarily

```c
mint *floor_mint (mint *number1, mint *number2, mint **divresultp, mint **modresultp);
void floor_mint_manually (mint *number1, mint *number2, mint *divresult, mint *modresult);
#define floor_mint_temporarily (divvar, modvar, number1, number2) /* ... */
```

there function and macro calculate division, then return quotient and remainder.

floor_mint function take two numbers and two output pointers, then calculate division with first and second arguments, last save the address of calculation result of quotient and remainder to third and last argument.
if this function success, return 0.
if second argument is 0, or caused error in the processing, this return non-zero integer.

floor_mint_manually funtion take two numbers and two output pointers, then calculate division with first and second arguments, last save calculation result of quotient and remainder to memory area of third and last argument.
if this function success, return 0.
if second argument is 0, or caused error in the processing, this return non-zero integer.

floor_mint_temporarily function take two numbers and two new variables, then calculate division with first and second arguments, last save calculation result of quotient and remainder to new variable of third and last arguments.
if this function success, new variables assigned valid address.
if second argument is 0, or caused errorr in the processing, new variables assigned NULL.

### div_mint, div_mint_temporarily

```c
mint *div_mint (mint *number1, mint *number2);
#define div_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro calculate division numbers.

div_mint function take two numbers, 
then calculate division by arguments, 
then save quotient to new memory area that allocated dynamically, last return it.
if this function success, return valid pointer.
if second parameter is 0, or caused error, return NULL.

div_mint_temporarily macro take a new variable and two numbers, 
then calculate division by arguments, 
then save quotient to new memory area on stack frame, last return it.
if this macro success, variable assigned valid address.
if third parameter is 0, or caused error, variable assigned NULL.

### mod_mint, mod_mint_temporarily

```c
mint *mod_mint (mint *number1, mint *number2);
#define mod_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro calculate modulo.

mod_mint function take two numbers, 
then calculate modulo by arguments, 
then save quotient to new memory area that allocated dynamically, last return it.
if this function success, return valid pointer.
if second parameter is 0, or caused error, return NULL.

mod_mint_temporarily macro take a new variable and two numbers, 
then calculate modulo by arguments, 
then save quotient to new memory area on stack frame, last return it.
if this macro success, variable assigned valid address.
if third parameter is 0, or caused error, variable assigned NULL.

### and_mint, and_mint_manually, and_mint_temporarily

```c
mint *and_mint (mint *number1, mint *number2);
void and_mint_manually (mint *number1, mint *number2, mint *result);
#define and_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro calculate AND.

and_mint function take two numbers, 
then calculate AND by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

and_mint_manually function take two numbers and output pointer,
then calculate AND by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

and_mint_temporarily macro take a new variable and two numbers, 
then calculate AND by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### or_mint, or_mint_manually, or_mint_temporarily

```c
mint *or_mint (mint *number1, mint *number2);
void or_mint_manually (mint *number1, mint *number2, mint *result);
#define or_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro calculate OR.

or_mint function take two numbers, 
then calculate OR by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

or_mint_manually function take two numbers and output pointer,
then calculate OR by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

or_mint_temporarily macro take a new variable and two numbers, 
then calculate OR by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### xor_mint, xor_mint_manually, xor_mint_temporarily

```c
mint *xor_mint (mint *number1, mint *number2);
void xor_mint_manually (mint *number1, mint *number2, mint *result);
#define xor_mint_temporarily (var, number1, number2) /* ... */
```

there functions and macro calculate XOR.

xor_mint function take two numbers, 
then calculate XOR by arguments, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

xor_mint_manually function take two numbers and output pointer,
then calculate XOR by arguments,
then save calculation result to memory area that is referenced by output pointer, last return it.
if output memory area has not enough size, parts of calculation result will be truncated.
this function always success.

xor_mint_temporarily macro take a new variable and two numbers, 
then calculate XOR by arguments, 
last assign address of new memory area that is calculation result to variable.
if this macro success, variable assigned valid address.
otherwise return NULL.

### not_mint, not_mint_manually, not_mint_temporarily

```c
mint *not_mint (mint *number);
void not_mint_manually (mint *number, mint *result);
#define not_mint_temporarily (var, number) /* ... */
```

there functions and macro calculate NOT.

not_mint function take a number, then calculate NOT by argument, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

not_mint_manually function take a number, and output pointer, 
then calculate NOT by argument, 
then save calculation result to memory area that referenced by output pointer, last return it.
if output memory area has not enough space for calculate result, it will be truncated.
this function always success.

not_mint_temporarily macro take a new variable and number, 
then calculate NOT by argument, 
then save calculation result to memory area on stack frame, last assign it to variable.
if this macro success, variable assigned valid address.
otherwise, return NULL.

### lshift_mint, lshift_mint_manually, lshift_mint_temporarily

```c
mint *lshift_mint (mint *number, mint *seek);
void lshift_mint_manually (mint *number, mint *seek, mint *result);
#define lshift_mint_temporarily (var, number, seek) /* ... */
```

there functions and macro shift number to left.

lshift_mint function take base number and seek number, 
then shift base number to left by seek number, 
then save seeked result to memory area that allocated dynamically, last return it.
if this function success, this return valid address.
otherwise, return NULL.

lshift_mint_manually function take base number, 
seek number and output pointer, then shift base number to left by seek number, 
then save calculation result to memory area that is referenced by output pointer. 
this function always success.

lshift_mint_temporarily macro take new variable, base number and seek number, 
then shift base number to left by seek number, 
then save calculation result to new memory area on stack frame.
if this function success, variable assigned valid address.
otherwise, variable assigned NULL.

### rshift_mint, rshift_mint_manually, rshift_mint_temporarily

```c
mint *rshift_mint (mint *number, mint *seek);
void rshift_mint_manually (mint *number, mint *seek, mint *result);
#define rshift_mint_temporarily (var, number, seek) /* ... */
```

there functions and macro shift number to right.

rshift_mint function take base number and seek number, 
then shift base number to right by seek number, 
then save seeked result to memory area that allocated dynamically, last return it.
if this function success, this return valid address.
otherwise, return NULL.

rshift_mint_manually function take base number, 
seek number and output pointer, then shift base number to right by seek number, 
then save calculation result to memory area that is referenced by output pointer. 
this function always success.

rshift_mint_temporarily macro take new variable, base number and seek number, 
then shift base number to right by seek number, 
then save calculation result to new memory area on stack frame.
if this function success, variable assigned valid address.
otherwise, variable assigned NULL.

### minus_mint, minus_mint_manually, minus_mint_temporarily

```c
mint *minus_mint (mint *number);
void minus_mint_manually (mint *number, mint *result);
#define minus_mint_temporarily (var, number) /* ... */
```

there functions and macro invert the sign.

not_mint function take a number, then invert the argument sign, 
then save calculation result to new memory area that allocated dynamically, last return it.
if this function success, return valid address.
otherwise, return NULL.

not_mint_manually function take a number, and output pointer, 
then invert argument sign, 
then save calculation result to memory area that referenced by output pointer, last return it.
if output memory area has not enough space for calculate result, it will be truncated.
this function always success.

not_mint_temporarily macro take a new variable and number, 
then invert argument sign, 
then save calculation result to memory area on stack frame, last assign it to variable.
if this macro success, variable assigned valid address.
otherwise, return NULL.

### is_zero_mint 

```c
bool is_zero_mint (mint *number);
```

if number is zero, return true, otherwise false.

### is_positive_mint 

```c
bool is_positive_mint (mint *number);
```

if number is positive number, return true, otherwise false.

### is_negative_mint 

```c
bool is_negative_mint (mint *number);
```

if number is negative number, return true, otherwise false.

### is_equal_mint 

```c
bool is_equal_mint (mint *number1, mint *number2);
```

if first number and second number are equal, return true, otherwise false.

### is_unequal_mint 

```c
bool is_unequal_mint (mint *number1, mint *number2);
```

if first number and second number are unequal, return true, otherwise false.

### is_lesser_mint 

```c
bool is_lesser_mint (mint *number1, mint *number2);
```

if first number is lesser than second number, return true, otherwise false.

### is_lesser_or_equal_mint 

```c
bool is_lesser_or_equal_mint (mint *number1, mint *number2);
```

if first number is lesser or equal than second number, return true, otherwise false.

### is_greater_mint 

```c
bool is_greater_mint (mint *number1, mint *number2);
```

if first number is greater than second number, return true, otherwise false.

### is_greater_or_equal_mint 

```c
bool is_greater_or_equal_mint (mint *number1, mint *number2);
```

if first number is greater or equal than second number, return true, otherwise false.

### cast_mint_to_int, cast_mint_to_uint, cast_mint_to_long, cast_mint_to_ulong

```c
int cast_mint_to_int (mint*);
long cast_mint_to_long (mint*);
unsigned int cast_mint_to_uint (mint*);
unsigned long cast_mint_to_ulong (mint*);
```

there  functions convert multiple length integer to native integer.
if conversion type has not enough memory area, parts of number value will be truncated.
if number is positive, cast_mint_to_int and cast_mint_to_long functions will remove most significant bit.

## Installation 

Mint include makefile for build, so you can install this commmand.
if build success, makefile create three file of mint.h, mint.lib and mint.dll under the dist directory.

```shell
$ make 
```

Mint include simple test, so you can run the test with this command.

```shell
$ make test
```

## License 

Mint has released under the [GNU General Public License Version3](LICENSE) License.
