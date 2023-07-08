#include <stdio.h>

struct student {
    int id;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = {315, "Yuni", 4.3}, s2 = {316, "Yura", 4.2},
                   s3 = {317, "Yuri", 4.1};
    struct student max;

    max = s1;
    if (s2.grade > max.grade)
        max = s2;
    if (s3.grade > max.grade)
        max = s3;

    printf("ID: %d\n", max.id);
    printf("Name: %s\n", max.name);
    printf("Grade: %lf\n", max.grade);

    return 0;
}