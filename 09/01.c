#include <stdio.h>

int main(void) {

    // variable address
    int a;
    double b;
    char c;

    printf("int address    : %p\n", &a);
    printf("double address : %p\n", &b);
    printf("char address   : %p\n\n", &c);

    // pointer
    int *pa;
    pa = &a;
    *pa = 10;
    printf("a   = %d\n", a);
    printf("*pa = %d\n", *pa);
    printf("*pa == a : %s\n\n", *pa == a ? "true" : "false");

    // two pointer
    int x = 10, y = 15, total;
    double avg;
    int *px = &x, *py = &y;
    int *pt = &total;
    double *pg = &avg;

    *pt = *px + *py;
    *pg = *pt / 2.0;

    printf("*px = %d, *py = %d\n", *px, *py);
    printf("*pt = %d, *pg = %.1f\n\n", *pt, *pg);

    return 0;
}
