#include <stdio.h>

void func(void);

int a = 10;

int main(void) {
    register int i; // declare register variable
    auto int sum = 0;

    for (i = 1; i <= 1000000; i++)
        sum += i;

    printf("sum : %d\n\n", sum);

    a = 20;
    func();
    printf("%d\n\n", a);

    return 0;
}

void func(void) { a = 30; }