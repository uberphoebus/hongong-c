#include <stdio.h>

struct profile {
    int age;
    double height;
};

struct student {
    struct profile pf;
    int id;
    double grade;
};

int main(void) {
    struct student yuni;
    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("Age: %d\n", yuni.pf.age);
    printf("Height: %lf\n", yuni.pf.height);
    printf("ID: %d\n", yuni.id);
    printf("Grade: %lf\n", yuni.grade);

    return 0;
}