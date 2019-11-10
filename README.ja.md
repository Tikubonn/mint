
# Mint 

\| 日本語 \| [English](README.md) \|

![](https://img.shields.io/badge/License-GPLv3-green)

Mint はC言語で書かれた多倍長演算用のライブラリです。

このライブラリは四則演算は勿論のこと「論理演算・比較演算・算術シフト演算」などに対応しています。
ただし、ライブラリの仕様の関係で論理シフト演算には対応していません。
同じ演算でも、演算結果を動的に確保した領域に保存する関数や、スタックフレーム上に保存する関数、
また、事前に用意された領域に保存する関数など、様々な種類が用意されています。

## Usage

下記の例では 1000 個目までのフィボナッチ数を計算し、画面に表示しています。

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

この関数は mint_cell 型の配列とその長さを受け取り、mint 構造体の領域を適切に初期化します。
関数が成功した場合、0 が返されます。
配列の大きさに 0 が指定された場合、この関数は失敗し、非ゼロの整数を返します。

### load_mint_from_int, load_mint_from_long

```c
void load_mint_from_int (int value, mint *number);
void load_mint_from_long (long value, mint *number);
```

これらの関数は整数を受け取り、その値を初期化済みの mint 構造体の内容に転写します。
もし mint 構造体が保有する領域が必要な大きさを満たしていない場合、値はその領域の大きさに切り詰められます。

### make_mint, make_mint_temporarily

```c
mint *make_mint (size_t size);
#define make_mint_temporarily (var, size) /* ... */
```

これらの関数とマクロは初期化された mint 構造体の領域を返します。

make_mint 関数は領域の大きさを受け取り、動的に確保された mint 構造体の領域を初期化します。
関数が成功した場合、動的に確保された領域が返されます。
動的に確保された領域は不要になり次第 free_mint 関数で解放してください。
領域の大きさに 0 が指定された場合、あるいは処理中に何かしらの問題が発生した場合、NULL が返されます。

make_mint_temporarily マクロはひとつの変数名と領域の大きさを受け取り、スタックフレーム上で確保した mint 構造体の領域を初期化します。
マクロが成功した場合、第１引数で受け取った変数名に、初期化された領域のアドレスを保存します。
領域の大きさに 0 が指定された場合、あるいは処理中に何かしらの問題が発生した場合、第１引数で受け取った変数名に NULL を保存します。

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

これらの関数とマクロは整数を受け取り、その値が転写された mint 構造体の領域を返します。

make_mint_from_int および make_mint_from_long 関数はひとつの整数を受け取り、初期化済みの動的に確保された領域に転写します。
関数が成功した場合、有効な転写済みの領域のアドレスを返されます。
関数が失敗した場合、NULL が返されます。

make_mint_from_int_temporarily および make_mint_from_long_temporarily 関数は変数名と整数を受け取り、
初期化済みのスタックフレーム上に確保された領域に転写します。
関数が成功した場合、第１引数の変数名に有効な転写済みの領域のアドレスが保存されます。
関数が失敗した場合、第１引数の変数名に NULL が保存されます。

### make_mint_from_string, make_mint_from_string0

```c
mint *make_mint_from_string (char *sequence, size_t size);
mint *make_mint_from_string0 (char *sequence);
```

これらの関数は数値を表す ASCII 文字配列を受け取り、その値が転写された mint 構造体の領域を返します。

make_mint_from_string 関数は ASCII 文字配列とその長さを受け取り、動的に確保された領域にその値を転写します。
文字配列の先頭が '-' であった場合、転写される値は負数になります。
文字配列の先頭が '+' であった場合、転写される値は正数になります。
文字配列の先頭がそれ以外の文字であった場合、転写される値は正数になります。
関数が成功した場合、転写済みの確保された領域が返されます。
文字配列の長さが 0 であった場合、あるいは処理中に何かしらの問題が発生した場合、この関数は NULL を返します。

make_mint_from_string0 関数は、末尾の文字が '\0' の文字配列を受け取る部分以外は、
ほとんど make_mint_from_string 関数と同じ振る舞いをします。

### add_mint, add_mint_manually, add_mint_temporarily

```c
mint *add_mint (mint *number1, mint *number2);
void add_mint_manually (mint *number1, mint *number2, mint *result);
#define add_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を加算します。

add_mint 関数はふたつの値を受け取り、それらの値を加算し、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

add_mint_manually 関数はふたつの値と保存先の領域を受け取り、加算を行い、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

add_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を加算し、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### sub_mint, sub_mint_manually, sub_mint_temporarily

```c
mint *sub_mint (mint *number1, mint *number2);
void sub_mint_manually (mint *number1, mint *number2, mint *result);
#define sub_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を減算します。

sub_mint 関数はふたつの値を受け取り、それらの値を減算し、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

sub_mint_manually 関数はふたつの値と保存先の領域を受け取り、減算を行い、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

sub_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を減算し、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### mul_mint, mul_mint_manually, mul_mint_temporarily

```c
mint *mul_mint (mint *number1, mint *number2);
void mul_mint_manually (mint *number1, mint *number2, mint *result);
#define mul_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を乗算します。

mul_mint 関数はふたつの値を受け取り、それらの値を乗算し、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

mul_mint_manually 関数はふたつの値と保存先の領域を受け取り、乗算を行い、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

mul_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を乗算し、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### floor_mint, floor_mint_manually, floor_mint_temporarily

```c
mint *floor_mint (mint *number1, mint *number2, mint **divresultp, mint **modresultp);
void floor_mint_manually (mint *number1, mint *number2, mint *divresult, mint *modresult);
#define floor_mint_temporarily (divvar, modvar, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を除算し、商と余剰を返します。

floor_mint 関数はふたつの値とふたつアドレスを受け取り、それらの値を除算し、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合 0 を返し、商が保存された領域のアドレスを `divresultp` に、余剰が保存された領域のアドレスを `modresultp` にそれぞれ保存します。
この関数が受け取った値のうちどちらかが NULL である場合、
または除数が 0 である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

floor_mint_manually 関数はふたつの値とふたつの保存先の領域を受け取り、除算を行い、その結果を保存先の領域に保存します。
この関数が成功した場合 0 を返します。
除数が 0 だった場合、または何かしらの問題が発生した場合には非ゼロの整数を返します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

floor_mint_temporarily マクロはふたつの変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を除算し、その結果を現在のスタックフレームに確保した領域に保存します。
商が保存された領域には `divvar` の名前でアクセスすることができます。
余剰が保存された領域には `modvar` の名前でアクセスすることができます。
このマクロが成功した場合、`divvar` と `modvar` の値は有効な値になります。
このマクロが失敗した場合、`divvar` と `modvar` の値は NULL になります。

### div_mint, div_mint_temporarily

```c
mint *div_mint (mint *number1, mint *number2);
#define div_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を除算し、商を返します。

div_mint 関数はふたつの値を受け取り、それらの値を除算し、その商を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
または除数が 0 である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

div_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を除算し、その商を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数 `var` の名前でアクセスすることができます。
このマクロが成功した場合、`var` の値は有効な値になります。
このマクロが失敗した場合、`var` の値は NULL になります。

### mod_mint, mod_mint_temporarily

```c
mint *mod_mint (mint *number1, mint *number2);
#define mod_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値を除算し、余剰を返します。

mod_mint 関数はふたつの値を受け取り、それらの値を除算し、その余剰を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
または除数が 0 である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

mod_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値を除算し、その余剰を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数 `var` の名前でアクセスすることができます。
このマクロが成功した場合、`var` の値は有効な値になります。
このマクロが失敗した場合、`var` の値は NULL になります。

### and_mint, and_mint_manually, and_mint_temporarily

```c
mint *and_mint (mint *number1, mint *number2);
void and_mint_manually (mint *number1, mint *number2, mint *result);
#define and_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値の論理積を求めます。

and_mint 関数はふたつの値を受け取り、それらの値の論理積を求め、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

and_mint_manually 関数はふたつの値と保存先の領域を受け取り、それらの論理積を求め、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

and_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値の論理積を求め、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### or_mint, or_mint_manually, or_mint_temporarily

```c
mint *or_mint (mint *number1, mint *number2);
void or_mint_manually (mint *number1, mint *number2, mint *result);
#define or_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値の論理和を求めます。

or_mint 関数はふたつの値を受け取り、それらの値の論理和を求め、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

or_mint_manually 関数はふたつの値と保存先の領域を受け取り、それらの論理和を求め、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

or_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値の論理和を求め、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### xor_mint, xor_mint_manually, xor_mint_temporarily

```c
mint *xor_mint (mint *number1, mint *number2);
void xor_mint_manually (mint *number1, mint *number2, mint *result);
#define xor_mint_temporarily (var, number1, number2) /* ... */
```

これらの関数とマクロは与えられた値の排他的論理和を求めます。

xor_mint 関数はふたつの値を受け取り、それらの値の排他的論理和を求め、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

xor_mint_manually 関数はふたつの値と保存先の領域を受け取り、それらの排他的論理和を求め、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

xor_mint_temporarily マクロは変数名とふたつの値を受け取ります。
このマクロは受け取ったふたつの値の排他的論理和を求め、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### not_mint, not_mint_manually, not_mint_temporarily

```c
mint *not_mint (mint *number);
void not_mint_manually (mint *number, mint *result);
#define not_mint_temporarily (var, number) /* ... */
```

これらの関数とマクロは与えられた値の否定を求めます。

not_mint 関数はひとつの値を受け取り、その値の否定を求め、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値が NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

not_mint_manually 関数はひとつの値と保存先の領域を受け取り、その値の否定を求め、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

not_mint_temporarily マクロは変数名とひとつの値を受け取ります。
このマクロは受け取ったひとつの値の否定を求め、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### lshift_mint, lshift_mint_manually, lshift_mint_temporarily

```c
mint *lshift_mint (mint *number, mint *seek);
void lshift_mint_manually (mint *number, mint *seek, mint *result);
#define lshift_mint_temporarily (var, number, seek) /* ... */
```

これらの関数とマクロは与えられた値を左に算術シフトします。

lshift_mint 関数は元となる値とシフトする量を受け取り、左に算術シフトを行います。
その後、その結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

lshift_mint_manually 関数は元となる値とシフトする量、そして保存先の領域を受け取り、左に算術シフトを行います。
その後、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

lshift_mint_temporarily マクロは変数名と元となる値とシフトする量を受け取ります。
このマクロは受け取ったそれらの値に左に算術シフトを行い、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### rshift_mint, rshift_mint_manually, rshift_mint_temporarily

```c
mint *rshift_mint (mint *number, mint *seek);
void rshift_mint_manually (mint *number, mint *seek, mint *result);
#define rshift_mint_temporarily (var, number, seek) /* ... */
```

これらの関数とマクロは与えられた値を右に算術シフトします。

rshift_mint 関数は元となる値とシフトする量を受け取り、右に算術シフトを行います。
その後、その結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値のうちどちらかが NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

rshift_mint_manually 関数は元となる値とシフトする量、そして保存先の領域を受け取り、右に算術シフトを行います。
その後、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

rshift_mint_temporarily マクロは変数名と元となる値とシフトする量を受け取ります。
このマクロは受け取ったそれらの値に右に算術シフトを行い、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### minus_mint, minus_mint_manually, minus_mint_temporarily

```c
mint *minus_mint (mint *number);
void minus_mint_manually (mint *number, mint *result);
#define minus_mint_temporarily (var, number) /* ... */
```

これらの関数とマクロは与えられた値の符号を反転させます。

minus_mint 関数はひとつの値を受け取り、その値の符号の反転を行い、その演算結果を動的に確保した領域に保存します。
この関数が成功した場合、動的に確保された領域のアドレスを返します。
この関数が受け取った値が NULL である場合、
あるいは何かしらの問題が発生した場合には NULL が返されます。

minus_mint_manually 関数はひとつの値と保存先の領域を受け取り、その値の符号の反転を行い、その結果を保存先の領域に保存します。
この関数は常に成功します。
保存先の領域が演算結果よりも小さい場合、演算結果は保存先領域の大きさに合わせて切り詰められます。

minus_mint_temporarily マクロは変数名とひとつの値を受け取ります。
このマクロは受け取ったひとつの値の符号の反転を行い、その結果を現在のスタックフレームに確保した領域に保存します。
保存された領域は第１引数の名前でアクセスすることができます。
このマクロが成功した場合、第１引数の変数の値は有効な値になります。
このマクロが失敗した場合、第１引数の変数の値は NULL になります。

### is_zero_mint 

```c
bool is_zero_mint (mint *number);
```

この関数は受け取った値が 0 であれば true を、それ以外の場合には false を返します。

### is_positive_mint 

```c
bool is_positive_mint (mint *number);
```

この関数は受け取った値が正数であれば true を、それ以外の場合には false を返します。

### is_negative_mint 

```c
bool is_negative_mint (mint *number);
```

この関数は受け取った値が負数であれば true を、それ以外の場合には false を返します。

### is_equal_mint 

```c
bool is_equal_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値と等しければ true を、それ以外の場合には false を返します。

### is_unequal_mint 

```c
bool is_unequal_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値と等しくなければ true を、それ以外の場合には false を返します。

### is_lesser_mint 

```c
bool is_lesser_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値よりも小さければ true を、それ以外の場合には false を返します。

### is_lesser_or_equal_mint 

```c
bool is_lesser_or_equal_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値よりも小さいか等しければ true を、それ以外の場合には false を返します。

### is_greater_mint 

```c
bool is_greater_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値よりも大きければ true を、それ以外の場合には false を返します。

### is_greater_or_equal_mint 

```c
bool is_greater_or_equal_mint (mint *number1, mint *number2);
```

この関数は第１引数の値が第２引数の値よりも大きいか等しければ true を、それ以外の場合には false を返します。

### cast_mint_to_int, cast_mint_to_uint, cast_mint_to_long, cast_mint_to_ulong

```c
int cast_mint_to_int (mint*);
long cast_mint_to_long (mint*);
unsigned int cast_mint_to_uint (mint*);
unsigned long cast_mint_to_ulong (mint*);
```

これらの関数はひとつの値を受け取り、それぞれ対応する整数型の値に変換します。
返り値の型が十分な大きさを持っていない場合、値は適当な大きさに切り詰められます。
また cast_mint_to_int および cast_mint_to_long 関数は引数の値が正数の場合、最上位ビットの値を 0 に設定します。

## Installation 

Mint はビルド用に makefile を同梱しています。そのため下記のコマンドからビルドすることができます。
ビルドが成功した場合、dist ディレクトリに mint.h・mint.lib・mint.dll の３つのファイルが作成されます。

```shell
$ make 
```

Mint は簡易的なテストコードが同梱されています。そのため下記のコマンドからテストを実行することができます。

```shell
$ make test
```

## License 

Mint は [GNU General Public License Version3](LICENSE) の許諾の下で公開されています。
