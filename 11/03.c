#include <stdio.h>

int main(void) {
    // int ch;
    // ch = getchar();
    // printf("입력한 문자 : ");
    // putchar(ch);
    // putchar('\n');

    char ch1;
    printf("문자를 입력하세요 : ");
    scanf("%c", &ch1);
    printf("입력한 문자 : %d\n", ch1);

    return 0;
}