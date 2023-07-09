#include <stdio.h>

int main(void) {
    FILE *ifp, *ofp; // file pointer
    char name[20];
    int kor, eng, math;
    int tot;
    double avg;
    int res;

    ifp = fopen("./18/ab.txt", "r");
    if (ifp == NULL) {
        printf("입력 파일을 열 수 없습니다.\n");
        return 1;
    }

    ofp = fopen("./18/abc.txt", "w");
    if (ofp == NULL) {
        printf("출력 파일을 열 수 없습니다.\n");
        return 1;
    }

    while (1) {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if (res == EOF) {
            break;
        }

        tot = kor + eng + math;
        avg = tot / 3.0;
        fprintf(ofp, "%s %d %.1lf\n", name, tot, avg);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}