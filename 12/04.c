#include <stdio.h>

int main(void) {
    char str[80];

    printf("Enter a string: ");
    gets(str); // call buffer until newline
    printf("str : %s\n", str);

    return 0;
}