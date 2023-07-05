#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(5 * sizeof(int)); // 5 * 4 = 20 bytes
    if (pi == NULL) {
        printf("Error: Out of memory\n");
        exit(1);
    }
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("average = %.1f\n", (float)sum / 5);
    free(pi);

    return 0;
}