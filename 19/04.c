#include <stdio.h>

void func(void);

int main(void) {
    printf("compile date, time : %s, %s\n", __DATE__, __TIME__);
    printf("file name : %s\n", __FILE__);
    printf("function : %s\n", __FUNCTION__);
    printf("line : %d\n", __LINE__);

#line 100 "macro.c"
    func();

    return 0;
}

void func(void) {
    printf("\n");
    printf("file : %s\n", __FILE__);
    printf("function : %s\n", __FUNCTION__);
    printf("line : %d\n", __LINE__);
}