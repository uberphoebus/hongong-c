#include <stdio.h>

int main(void) {
    int rank = 2, m = 0;
    switch (rank) {
    case 1:
        m = 300;
        break;
    case 2:
        m = 200;
        break;
    case 3:
        m = 100;
        break;
    default:
        m = 10;
        break;
    }
    printf("m: %d\n", m);

    int age = 25, chest = 95;
    char size;
    if (age < 20) {
        if (chest < 85) {
            size = 'S';
        } else if (chest < 90) {
            size = 'M';
        } else {
            size = 'L';
        }
    } else {
        if (chest < 90) {
            size = 'S';
        } else if (chest < 100) {
            size = 'M';
        } else {
            size = 'L';
        }
    }
    printf("size = %c\n", size);

    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
    case '+':
        printf("%d %c %d = %d\n", a, op, b, a + b);
        break;
    case '-':
        printf("%d %c %d = %d\n", a, op, b, a - b);
        break;
    case '*':
        printf("%d %c %d = %d\n", a, op, b, a * b);
        break;
    case '/':
        if (b == 0) {
            printf("Divided by zero!\n");
        } else {
            printf("%d %c %d = %d\n", a, op, b, a / b);
        }
        break;
    }

    return 0;
}