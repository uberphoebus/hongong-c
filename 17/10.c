#include <stdio.h>

// declare a union
union student {
    int num;
    double grade;
};

int main(void) {
    union student s1 = {315};

    printf("num: %d\n", s1.num);
    s1.grade = 3.5;
    printf("grade: %.1lf\n", s1.grade);
    printf("num: %d\n", s1.num);

    return 0;
}