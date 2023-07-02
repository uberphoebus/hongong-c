#include <stdio.h>

int main(void) {
    char str[80];
    printf("Enter a string: ");
    scanf("%s", str);          // call buffer until space, tab, newline
    printf("str : %s\n", str); // first char

    scanf("%s", str);
    printf("buffer : %s\n", str); // second char

    return 0;
}