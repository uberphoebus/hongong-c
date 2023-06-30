#include <stdio.h>

int main(void) {
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    for (i = 0; i < 3; i++) {
        printf("*pa = %d\n", *pa); // ary[1] == *(ary + 1)
        pa++;
    }
    printf("\n");

    int *pb = ary;
    for (i = 0; i < 3; i++) {
        printf("*pb = %d\n", *(pb++)); // ary[1] == *(ary + 1)
    }

    // 전위
    int *px = ary;
    for (int i = 0; i < 3; i++) {
        printf("++(*px) = %d\n", ++(*px)); // 11 12 13
    }

    // 후위
    int *py = ary;
    for (int i = 0; i < 3; i++) {
        printf("++(*py) = %d\n", (*py)++); // 10 11 12
    }

    return 0;
}