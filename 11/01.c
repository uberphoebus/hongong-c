#include <stdio.h>

int main(void) {
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z')) {
        small = cap + ('a' - 'A');
    }
    printf("대문자 %c의 소문자는 %c입니다.\n", cap, small);

    return 0;
}