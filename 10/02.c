#include <stdio.h>

int main(void) {
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;              // ary[0] = 10;
    *(pa + 1) = 20;        // ary[1] = ary[0] + 10;
    pa[2] = pa[0] + pa[1]; // ary[2] = ary[0] + ary[1];

    for (i = 0; i < 3; i++)
        printf("pa[%d] = %d\n", i, pa[i]); // ary[1] == *(ary + 1)
    printf("\n");

    printf("sizeof ary : %lu\n", sizeof(ary));  // 12
    printf("sizeof pa  : %lu\n\n", sizeof(pa)); // 8

    return 0;
}