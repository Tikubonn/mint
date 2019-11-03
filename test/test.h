#include <stdio.h>
#include <stdlib.h>

#define test(formula)\
if (formula){\
fprintf(stderr, "[success] %s:%d %s\n", __FILE__, __LINE__, #formula);\
}\
else {\
fprintf(stderr, "[error] %s:%d %s\n", __FILE__, __LINE__, #formula);\
abort();\
}
