#include <stdio.h>
#include <string.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
void swap(char *type, void *ap, void *bp) {
    int temp;
    double dtemp;

    if (strcmp(type, "int") == 0) {
        temp = *(int *)ap;
        *(int *)ap = *(int *)bp;
        *(int *)bp = temp;
    }
    if (strcmp(type, "double") == 0) {
        dtemp = *(double *)ap;
        *(double *)ap = *(double *)bp;
        *(double *)bp = dtemp;
    }
}

int main(void) {
    int ary[5] = {10, 20, 30, 40, 50};
    void *vp = ary;

    printf("%d\n", ((int *)vp)[2]);

    int (*pary[3])(int, int) = {add, sub, mul};
    int res = 0;
    for (int i = 0; i < 3; ++i) {
        res += pary[i](2, 1);
    }
    printf("%d\n", res);

    int a1 = 22, a2 = 44;
    double b1 = 187.5, b2 = 165.4;
    swap("int", &a1, &a2);
    swap("double", &b1, &b2);
    printf("a1 : %d, a2 : %d\n", a1, a2);
    printf("b1 : %f, b2 : %f\n", b1, b2);

    return 0;
}