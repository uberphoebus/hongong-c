#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char temp[80];
    char *str[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        gets(temp);
        str[i] = malloc(strlen(temp) + 1); // allocate memory for string
        strcpy(str[i], temp);              // copy string to allocated memory
    }

    for (int i = 0; i < 3; i++) {
        printf("String %d: %s\n", i + 1, str[i]);
    }

    for (int i = 0; i < 3; i++) {
        free(str[i]); // free allocated memory
    }
}