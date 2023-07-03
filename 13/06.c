#include <stdio.h>

void add_ten_copy(int a);
void add_ten_ref(int *pa);
void *sum_return_addr(int a, int b);

int main(void) {
    int a = 10;
    add_ten_copy(a); // copy of a is passed to add_ten_copy function
    printf("add_ten_copy a : %d\n", a);

    add_ten_ref(&a); // address of a is passed to add_ten_ref function
    printf("add_ten_ref  a : %d\n", a);

    int *resp;
    resp = sum_return_addr(10, 20);
    printf("sum_return_addr : %d\n", *resp); // 30

    return 0;
}

void add_ten_copy(int a) { a += 10; }

void add_ten_ref(int *pa) { *pa += 10; }

void *sum_return_addr(int a, int b) {
    static int res;
    res = a + b;
    return &res;
}