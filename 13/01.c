#include <stdio.h>

void assign(void);

int main(void) {
    auto int a = 0; // declare local variable
    assign();
    printf("main func a   : %d\n\n", a);

    int x = 10, y = 20;
    printf("before swap x, y : %d, %d\n", x, y);
    {
        int temp = x;
        x = y;
        y = temp;
    }
    printf("after swap  x, y : %d, %d\n\n", x, y);

    return 0;
}

void assign(void) {
    int a;
    a = 10;
    printf("assign func a : %d\n", a);
}