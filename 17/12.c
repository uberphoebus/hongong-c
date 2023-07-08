#include <stdio.h>

struct student {
    int num;
    double grade;
};

typedef struct student Student; // typedef
void print_data(Student *ps);

int main(void) {
    Student s1 = {315, 3.5};
    print_data(&s1);

    return 0;
}

void print_data(Student *ps) {
    printf("num: %d\n", ps->num);
    printf("grade: %.1lf\n", ps->grade);
}