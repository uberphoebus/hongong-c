#include <stdio.h>

int main(void) {
    // 산술 연산자
    int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;

    printf("sum = %d\n", sum);
    printf("sub = %d\n", sub);
    printf("mul = %d\n", mul);
    printf("inv = %d\n", inv);

    double apple;
    int banana, orange;

    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;
    printf("apple  = %.1lf\n", apple);
    printf("banana = %d\n", banana);
    printf("orange = %d\n", orange);

    // 증감 연산자
    ++a;
    --b;
    printf("a = %d, b = %d\n", a, b);

    int x = 5, y = 5;
    int pre, post;

    pre = (++x) * 3;
    post = (y++) * 3;

    printf("x = %d, y = %d\n", x, y);
    printf("pre = %d, post = %d\n", pre, post);

    // 관계 연산자
    int c = 10, d = 20, e = 10;
    int res;

    res = (c > d);
    printf("c > d = %d\n", res);
    res = (c < d);
    printf("c < d = %d\n", res);
    res = (c >= e);
    printf("c >= e = %d\n", res);
    res = (c <= e);
    printf("c <= e = %d\n", res);
    res = (c == e);
    printf("c == e = %d\n", res);
    res = (c != e);
    printf("c != e = %d\n", res);

    // 논리 연산자
    int f = 30;
    int res2;

    res2 = (c > 10 && f < 20);
    printf("c > 10 && f < 20 = %d\n", res2);
    res2 = (c > 10 || f < 20);
    printf("c > 10 || f < 20 = %d\n", res2);
    res2 = !(c > 10);
    printf("!(c > 10) = %d\n", res2);

    return 0;
}