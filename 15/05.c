#include <stdio.h>

void print_ary(int (*pa)[4]);

int main(void) {
    int ary[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // int(*pa)[4]; // pointer to array of 4 integers
    print_ary(ary);
    printf("\n");

    double grade = 4.5;
    double *pg = &grade;
    double **ppg = &pg;

    printf("%.1lf\n", **ppg);
    printf("%p\n", &ppg);
    printf("%p\n", *&pg);
    printf("%p\n", *ppg);
    printf("%p\n", &*ppg);

    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    int **ppa = &pa, **ppb = &pb;
    int *pt;

    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;

    printf("a : %d, b : %d\n", a, b);
    printf("*pa : %d, *pb : %d\n", *pa, *pb);

    return 0;
}

void print_ary(int (*pa)[4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; ++j) {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}