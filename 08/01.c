#include <stdio.h>

int main(void) {
    int ary[5];
    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    // scanf("%d", &ary[3]); // get input from user

    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]); // garbage value

    int ary2[5] = {1, 2, 3, 4, 5};
    int ary3[1000] = {0};   // initialize all elements to 0
    int ary4[] = {1, 2, 3}; // size is 3

    double ary5[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char ary6[5] = {'a', 'b', 'c', 'd', 'e'};

    int score[5] = {80, 95, 77, 84, 100};
    int i;
    int total = 0;
    double avg;
    for (i = 0; i < 5; i++) {
        total += score[i];
    }
    avg = total / 5.0;
    for (i = 0; i < 5; i++) {
        printf("%5d ", score[i]);
    }
    printf("\n");
    printf("total: %d, avg: %.2lf\n", total, avg);

    // sizeof array
    int count = sizeof(score) / sizeof(score[0]);
    printf("sizeof array\n");
    for (i = 0; i < count; i++) {
        printf("%5d ", score[i]);
    }
    printf("\n");

    int A[3] = {1, 2, 3};
    int B[10];
    int size_b = sizeof(B) / sizeof(B[0]);
    int i2;
    for (i2 = 0; i2 < size_b; i2++) {
        B[i2] = A[i2 % 3];
    }
    for (i2 = 0; i2 < size_b; i2++) {
        printf("%d ", B[i2]);
    }
    printf("\n");

    return 0;
}