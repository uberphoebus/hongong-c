#include <stdio.h>

int main(void) {
    // check1
    int res1;
    res1 = sizeof(short) > sizeof(long) ? 1 : 0;
    res1 == 1 ? printf("short\n") : printf("long\n");

    // check2
    int seats = 70, audience = 65;
    double rate;

    rate = (double)audience / (double)seats * 100;
    printf("rate : %.1lf%%\n", rate);

    // check3
    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;
    min = (int)((time - hour) * 60);
    sec = (int)((((time - hour) * 60) - min) * 60);
    printf("%d시간 %d분 %d초\n", hour, min, sec);

    // practice
    double weight, height;
    double bmi;

    printf("몸무게(kg)와 키(cm)를 입력하세요 : ");
    scanf("%lf %lf", &weight, &height);
    if (weight <= 0 || height <= 0) {
        printf("잘못된 입력입니다.\n");
        return 0;
    } else {
        bmi = weight / ((height / 100) * (height / 100));
    }

    if (bmi >= 20 && bmi < 25) {
        printf("표준입니다.\n");
    } else {
        printf("체중관리가 필요합니다.\n");
    }

    return 0;
}