#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a); // scanf는 입력받은 값을 변수에 저장
    printf("a = %d\n", a);

    int b;
    double c;
    scanf("%d %lf", &b, &c); // scanf는 여러 개의 값을 입력받을 수 있음
    printf("b = %d, c = %lf\n", b, c);

    int age;
    double height;
    printf("나이와 키를 입력하세요: ");
    scanf("%d %lf", &age, &height);
    printf("나이는 %d살, 키는 %lfcm입니다.\n", age, height);

    // char
    char grade;
    char name[20];
    printf("input grade : ");
    scanf("%c", &grade);
    printf("input name : ");
    scanf("%s", name);
    printf("grade : %c, name : %s\n", grade, name);

    return 0;
}