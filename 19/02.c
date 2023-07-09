#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")

int main(void) {
    double radius, area;

    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    if (area > LIMIT) {
        ERR_PRN;
    } else {
        printf("원의 면적은 %lf입니다. (%s)\n", area, MSG);
    }

    return 0;
}