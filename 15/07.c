#include <stdio.h>

int sum(int, int);

int main(void) {
    int (*fp)(int, int); // function pointer
    int res1, res2, res3, res4;
    fp = sum;

    res1 = fp(10, 20);
    printf("result1 : %d\n", res1);

    res2 = (*fp)(10, 20);
    printf("result2 : %d\n", res2);

    res3 = sum(10, 20);
    printf("result3 : %d\n", res3);

    res4 = (*sum)(10, 20);
    printf("result4 : %d\n", res4);

    return 0;
}

int sum(int a, int b) { return a + b; }