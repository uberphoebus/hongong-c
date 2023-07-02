#include <stdio.h>

int main(void) {
    int age;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    fgetc(stdin); // remove newline
    printf("Enter your name: ");
    gets(name);

    printf("age : %d, name : %s\n", age, name);

    return 0;
}