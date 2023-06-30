#include <stdio.h>

void print_ary(int *pa);
void print_ary2(int *pa, int size);
void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void) {
    int ary[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};
    print_ary(ary);
    print_ary2(ary, sizeof(ary) / sizeof(ary[0]));
    print_ary2(ary2, sizeof(ary2) / sizeof(ary2[0]));

    double ary3[5];
    int size = sizeof(ary3) / sizeof(ary3[0]);
    input_ary(ary3, size);
    double max = find_max(ary3, size);
    printf("max : %lf\n", max);

    return 0;
}

void print_ary(int *pa) {
    int i;
    printf("print_ary  : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", pa[i]);
    }
    printf("\n");
}

void print_ary2(int *pa, int size) {
    int i;
    printf("print_ary2 : ");
    for (i = 0; i < size; i++) {
        printf("%d ", pa[i]);
    }
    printf("\n");
}

void input_ary(double *pa, int size) {
    int i;
    printf("%d input_ary  : ", size);
    for (i = 0; i < size; i++) {
        scanf("%lf", pa + i);
    }
}

double find_max(double *pa, int size) {
    double max;
    int i;
    max = pa[0];
    for (i = 1; i < size; i++) {
        if (max < pa[i])
            max = pa[i];
    }
    return max;
}