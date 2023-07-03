#include <stdio.h>

int main(void) {
    char a[4][10] = {"horse", "fox", "hippo", "tiger"};
    char *pa[] = {a[0], a[1], a[2], a[3]};
    int count = sizeof(pa) / sizeof(pa[0]);
    for (int i = 0; i < count; i++) {
        printf("%c", pa[i][i]);
    }
    printf("\n");

    int ary[5][6] = {0};

    int num = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            ary[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            ary[4][j] += ary[i][j];
            ary[i][5] += ary[i][j];
            ary[4][5] += ary[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%5d", ary[i][j]);
        }
        printf("\n");
    }
    return 0;
}