#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int)); // allocate memory for int
    if (pi == NULL) {
        printf("Failed to allocate memory\n"); // if failed
        exit(1);                               // exit program
    }

    pd = (double *)malloc(sizeof(double)); // allocate memory for double

    *pi = 10;
    *pd = 3.4;

    printf("int    %d\n", *pi);
    printf("double %1f\n", *pd);

    free(pi); // free memory
    free(pd);

    return 0;
}