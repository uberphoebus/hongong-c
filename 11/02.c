#include <stdio.h>

int main(void) {
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);
    printf("[%d %d]\n", ch1, ch2);
    printf("\n");

    return 0;
}