#include <stdio.h>

int main(void) {
    char ch;
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    printf("\n");

    char ch2;
    while (1) {
        scanf("%c", &ch2);
        if (ch2 == '\n') {
            break;
        }
        printf("%c", ch2);
    }

    return 0;
}