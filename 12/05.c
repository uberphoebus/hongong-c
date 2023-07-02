#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // call buffer until newline
    str[strlen(str) - 1] = '\0';    // remove newline

    printf("str : %s\n", str);

    return 0;
}