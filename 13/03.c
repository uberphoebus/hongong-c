#include <stdio.h>

void assign10(void);
void assign20(void);

int a; // declare global variable

int main(void) {
    printf("before assign func a : %d\n", a);
    assign10();
    assign20();
    printf("after assign func a  : %d\n", a);

    return 0;
}

void assign10(void) { a = 10; }

void assign20(void) {
    int a; // declare local variable
    a = 20;
}