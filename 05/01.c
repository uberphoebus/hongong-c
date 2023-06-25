#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    if (a > 0) {
        b = 1;
    } else if (a == 0) {
        b = 2;
    } else {
        b = 3;
    }

    printf("a: %d, b: %d\n", a, b);

    int a1 = 10;
    if (a1 < 0) {
        a1 = -a1;
    } else if (a % 2 == 0) {
        a1 = 2;
    } else {
        a1 = 1;
    }
    printf("a1: %d\n", a1);

    int chest = 95;
    char size;
    if (chest <= 90) {
        size = 'S';
    } else if (chest <= 100) {
        size = 'M';
    } else {
        size = 'L';
    }
    printf("chest: %d, size: %c\n", chest, size);

    double height = 179.5;
    double weight = 75.0;

    if (height >= 187.5 && weight < 80.0) {
        printf("ok\n");
    } else {
        printf("cancel\n");
    }

    return 0;
}