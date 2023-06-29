#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void) {
    double max, mid, min;
    max = 2.7;
    mid = 1.5;
    min = 3.4;

    line_up(&max, &mid, &min);
    printf("max = %.1f, mid = %.1f, min = %.1f\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb) {
    double tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
void line_up(double *maxp, double *midp, double *minp) {
    if (*maxp < *midp)
        swap(maxp, midp);
    if (*maxp < *minp)
        swap(maxp, minp);
    if (*midp < *minp)
        swap(midp, minp);
}