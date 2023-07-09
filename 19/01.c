#include "student.h" // student.h is in the same directory as this file
#include <stdio.h>

int main(void) {
    Student a = {315, "홍길동"};
    printf("학번: %d, 이름: %s\n", a.num, a.name);

    return 0;
}