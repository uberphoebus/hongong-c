#include <stdio.h>

struct marriage {
    char name[20];
    int age;
    char gender;
    double height;
};

int main(void) {
    struct marriage m1 = {"Andy", 22, 'm', 175.5};
    struct marriage *mp = &m1;

    printf("name: %s\n", mp->name);
    printf("age: %d\n", mp->age);
    printf("gender: %c\n", mp->gender);
    printf("height: %.1lf\n", mp->height);
}