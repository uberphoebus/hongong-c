#include <stdio.h>

int main(void) {
    // 제어문자
    printf("Be happy!\n");
    printf("123456789012345678901234567890\n");
    printf("My\tfriend\n");
    printf("Goot\bd\tchance\n");
    printf("Cow\rW\a\n");

    // int, float
    printf("%d\n", 10);
    printf("%lf\n", 3.4);
    printf("%.1lf\n", 3.45);
    printf("%.10lf\n", 3.4);

    printf("%d + %d = %d\n", 10, 20, 10 + 20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

    return 0;
}