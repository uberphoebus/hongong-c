#include <stdio.h>

int main(void) {
    int a = 10, b = 12;

    printf("a & b : %d\n", a & b);   // and
    printf("a ^ b : %d\n", a ^ b);   // xor
    printf("a | b : %d\n", a | b);   // or
    printf("~a : %d\n", ~a);         // not
    printf("a << 1 : %d\n", a << 1); // left shift(*2)
    printf("a >> 2 : %d\n", a >> 2); // right shift(/2)

    return 0;
}