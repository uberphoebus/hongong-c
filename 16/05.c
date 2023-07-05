#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);

int main(void) {
    char temp[80];
    char *str[21] = {0};
    int i = 0;

    while (i < 20) {
        printf("Enter string : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) {
            break;
        }
        str[i] = malloc(strlen(temp) + 1); // allocate memory for string
        strcpy(str[i], temp);              // copy string to allocated memory
        i++;
    }
    print_str(str);

    for (int i = 0; str[i] != NULL; i++) { // until str[i] is NULL
        free(str[i]);                      // free allocated memory
    }

    return 0;
}

void print_str(char **ps) {
    while (*ps != NULL) {
        printf("%s\n", *ps);
        ps++;
    }
}