#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.4;

    printf("int a sizeof      : %zd\n", sizeof(a));
    printf("double b sizeof   : %zd\n", sizeof(b));
    printf("const int sizeof  : %zd\n", sizeof(10));
    printf("const calc sizeof : %zd\n", sizeof(1.5 + 3.4));
    printf("char sizeof       : %zd\n", sizeof(char));

    return 0;
}