#include <stdio.h>

void swap(int *pa, int *pb);

int main(void) {
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    int x = 10, y = 20;
    int *px = &x, *py = &y, *pt;
    pt = px;
    px = py;
    py = pt;
    printf("x = %d, y = %d\n", *px, *py);

    return 0;
}

void swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}