#include <stdio.h>

int main(void) {
    int num, grade;

    printf("학번을 입력하세요 : ");
    scanf("%d", &num); // 개행 문자가 버퍼에 남아있음
    getchar();         // 버퍼에 남아있는 개행 문자를 제거
    printf("학점을 입력하세요 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c\n", num, grade);

    return 0;
}