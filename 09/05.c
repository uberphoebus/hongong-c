#include <stdio.h>

int main(void) {
    char ch;
    int in;
    double db;

    char *pch = &ch;
    int *pin = &in;
    double *pdb = &db;

    printf("char addr sizeof   : %lu\n", sizeof(&ch));
    printf("int addr sizeof    : %lu\n", sizeof(&in));
    printf("double addr sizeof : %lu\n\n", sizeof(&db));

    printf("char *pch sizeof   : %lu\n", sizeof(pch));
    printf("int *pin sizeof    : %lu\n", sizeof(pin));
    printf("double *pdb sizeof : %lu\n\n", sizeof(pdb));

    printf("char *pch sizeof   : %lu\n", sizeof(*pch));
    printf("int *pin sizeof    : %lu\n", sizeof(*pin));
    printf("double *pdb sizeof : %lu\n\n", sizeof(*pdb));

    return 0;
}