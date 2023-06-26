#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
        if (sum > 30) {
            break; // break the loop
        }
    }
    printf("sum : %d\n", sum);
    printf("i : %d\n", i);

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            continue; // skip the rest of the loop
        }
        sum += i;
    }
    printf("sum : %d\n", sum);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i + j == 4 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // prime num
    int n = 100;
    int row = 0;
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%2d  ", i);
            row++;
            if (row % 5 == 0) {
                printf("\n");
            }
        }
    }

    return 0;
}