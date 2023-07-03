#include <stdio.h>

int main(void) {
    char animal[5][20] = {"dog", "elephant", "horse", "tiger", "lion"};
    int i, count;

    count = sizeof(animal) / sizeof(animal[0]); // calc row count
    for (i = 0; i < count; i++) {
        printf("%s ", animal[i]);
    }
    printf("\n");

    return 0;
}