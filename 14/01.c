#include <stdio.h>

int main(void) {
    int score[3][4] = {{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}};
    int total;
    double average;
    int i, j;

    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total += score[i][j];
        }
        average = total / 4.0;
        printf("Total : %d, Average : %.2lf\n", total, average);
    }

    return 0;
}