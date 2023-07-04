#include <stdio.h>

int main(void) {
    int ary[5];

    printf("ary value : %p\t", ary);
    printf("ary addr  : %p\n", &ary);
    printf("ary + 1   : %p\t", ary + 1);
    printf("&ary + 1  : %p\n", &ary + 1);
}