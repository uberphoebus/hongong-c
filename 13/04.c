#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void) {
    int i;
    printf("local auto func...\n");
    for (i = 0; i < 3; i++)
        auto_func(); // 1 1 1 -> auto variable is initialized every time

    printf("local static func...\n");
    for (i = 0; i < 3; i++)
        static_func(); // 1 2 3 -> static variable is initialized only once

    return 0;
}

void auto_func(void) {
    auto int a = 0; // declare local auto variable
    a++;
    printf("%d\n", a);
}

void static_func(void) {
    static int a; // declare local static variable
    a++;
    printf("%d\n", a);
}