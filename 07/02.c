#include <stdio.h>

int get_num(void);
void print_char(char ch, int count);
void print_line(void);
void fruit(int count);
int rec_func(int n);

int main(void) {
    int result;
    // result = get_num();
    result = 10;
    printf("result: %d\n", result);

    print_char('@', 5);

    print_line();
    printf("학번     이름      전공      학점\n");
    print_line();

    fruit(1);

    printf("rec_func: %d\n", rec_func(10));
    printf("rec_func: %d\n", rec_func(100));

    return 0;
}

int get_num(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

void print_char(char ch, int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("%c", ch);
    }
    printf("\n");
    return;
}

void print_line(void) {
    int i;
    for (i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}

void fruit(int count) {
    printf("apple\n");
    if (count == 3)
        return;
    fruit(count + 1);
}

int rec_func(int n) {
    if (n == 1)
        return 1;
    return n + rec_func(n - 1);
}