#include <stdio.h>

int main(void) {
    char mark[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == j) || ((i + j) == 4)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}