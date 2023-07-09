#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *ifp, *ofp;
    char str[80];
    char *res;

    ifp = fopen("./18/a.txt", "r");
    if (ifp == NULL) {
        printf("입력 파일을 열 수 없습니다.\n");
        return 1;
    }

    ofp = fopen("./18/b.txt", "w");
    if (ofp == NULL) {
        printf("출력 파일을 열 수 없습니다.\n");
        return 1;
    }

    while (1) {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL) {
            break;
        }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs("\n", ofp);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}