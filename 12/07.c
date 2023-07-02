#include <stdio.h>

int main(void) {
    char str[80] = "apple juice";
    char *ps = "banana";

    puts(str);         // print apple juice and newline
    fputs(ps, stdout); // print only banana, no newline
    puts("milk");
    return 0;
}