#include <stdio.h>

int main(void) {
    // 형 변환 연산자
    int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b); // casting
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %.2lf\n", res);

    a = (int)res;
    printf("(int) %.2lf = %d\n", res, a);

    return 0;
}