#include <stdio.h>

int main(void) {
    char ch;
    int len = 0;
    int max = 0;

    while (1) {
        ch = getchar();
        if (ch == 'z') {
            break;
        }

        len = 0;
        while (ch != '\n') {
            len++;
            ch = getchar();
        }
        printf("\n");

        if (len > max) {
            max = len;
        }
    }
    printf("max : %d\n", max);

    return 0;
}