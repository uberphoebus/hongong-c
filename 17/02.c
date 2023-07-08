#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void) {
    struct profile yuni;

    strcpy(yuni.name, "Yuni"); // yuni.name = "Yuni" is wrong
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char *)malloc(80);
    printf("Input your introduction: ");
    gets(yuni.intro);

    printf("Name: %s\n", yuni.name);
    printf("Age: %d\n", yuni.age);
    printf("Height: %lf\n", yuni.height);
    printf("Introduction: %s\n", yuni.intro);

    return 0;
}