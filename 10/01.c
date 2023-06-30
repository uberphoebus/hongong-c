#include <stdio.h>

int main(void) {
    int ary[3];
    int i;

    *(ary + 0) = 10;              // ary[0] = 10;
    *(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10;

    printf("input ary[2] : \n");

    for (i = 0; i < 3; i++)
        printf("ary[%d] = %d\n", i, *(ary + i)); // ary[1] == *(ary + 1)

    return 0;
}