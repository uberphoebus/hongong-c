#include <stdio.h>

int main(void) {
    FILE *fp;
    char str[] = "banana";
    int i;

    fp = fopen("./18/a.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    i = 0;
    while (str[i] != '\0') {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);

    return 0;
}