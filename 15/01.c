#include <stdio.h>

int main(void) {
    int a = 10;
    int *pi;   // pointer to int
    int **ppi; // pointer to pointer to int

    pi = &a;   // pi points to a
    ppi = &pi; // ppi points to pi
    printf("-------------------------------------------------------------------"
           "--\n");
    printf("variable          value              &              *            "
           " **\n");
    printf("-------------------------------------------------------------------"
           "--\n");
    printf("       a %14d %14p\n", a, &a);
    printf("      pi %14p %14p %14d\n", pi, &pi, *pi);
    printf("     ppi %14p %14p %14p %14d\n", ppi, &ppi, *ppi, **ppi);

    return 0;
}