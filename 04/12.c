#include <stdio.h>

int main(void) {
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;
    printf("res : %d\n", res);

    (a < b) ? printf("a < b\n") : printf("a >= b\n");

    return 0;
}