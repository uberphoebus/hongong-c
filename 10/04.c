#include <stdio.h>

int main(void) {
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;
    int *pb = pa + 3;

    printf("pa : %p\n", pa);
    printf("pb : %p\n", pb);

    pa++;
    printf("pb - pa : %ld\n", pb - pa); // 2

    double ary2[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
    double *pa2 = ary2;
    double *pb2 = pa2 + 2;

    printf("ary2       : %p\n", ary2);         // ary2[0] addr
    printf("*(ary + 1) : %lf\n", *(ary2 + 1)); // 3.5
    printf("pa2 + 2    : %p\n", pa2 + 2);      // ary2[2] addr
    printf("pa[3]      : %lf\n", pa2[3]);      // 0.5
    printf("pb2 - pa2  : %ld\n", pb2 - pa2);   // 2

    for (int i = 0; i < 3; i++) {
        printf("%.1lf \n", *pb2);
        pb2++;
    }

    return 0;
}