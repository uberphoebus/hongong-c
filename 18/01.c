#include <stdio.h>

int main(void) {
    FILE *fp;

    fp = fopen("./18/a.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    printf("파일을 열었습니다.\n");
    fclose(fp);

    return 0;
}