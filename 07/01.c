#include <stdio.h>

int sum(int x, int y);
double average(int x, int y);
double centi_to_meter(double x);

int main(void) {
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result: %d\n", result);

    double res;
    res = average(1.5, 3.4);
    printf("res: %lf\n", res);

    double res2;
    res2 = centi_to_meter(187);
    printf("res2: %.2lf\n", res2);

    return 0;
}

int sum(int x, int y) { // copy value of a and b
    int temp;
    temp = x + y;
    return temp;
}

double average(int x, int y) {
    double temp;
    temp = (x + y) / 2.0;
    return temp;
}

double centi_to_meter(double x) {
    double temp;
    temp = x / 100.0;
    return temp;
}