#include <stdio.h>

int main(void) {
    // int
    printf("%d\n", 12);
    printf("%d\n", 014);
    printf("%d\n", 0xc);

    // float
    printf("%.1lf\n", 1e6);     // 지수를 소수로 출력
    printf("%.7lf\n", 3.14e-5); // 소수점 7자리까지 출력
    printf("%le\n", 0.0000314); // 지수 형태 출력
    printf("%.2le\n", 0.0000314);

    // char
    printf("%c\n", 'A'); // 문자 출력
    printf("%s\n", "A"); // 문자열 출력
    printf("%c = %s\n", '1', "first");

    return 0;
}