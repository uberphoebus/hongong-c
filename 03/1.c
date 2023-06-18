#include <stdio.h>
#include <string.h>

int main(void) {
    int a;
    int b, c;
    double da;
    char ch;

    a = 10;
    b = a; // l-value, r-value
    c = a + 20;
    da = 3.5;
    ch = 'A';

    printf("a의 값은 %d입니다.\n", a);
    printf("b의 값은 %d입니다.\n", b);
    printf("c의 값은 %d입니다.\n", c);
    printf("da의 값은 %lf입니다.\n", da);
    printf("ch의 값은 %c입니다.\n", ch);

    // char
    char ch1 = 'A';
    char ch2 = 65;
    printf("%c %d\n", ch1, ch1); // char, ascii
    printf("%c %d\n", ch2, ch2);

    // int
    short sh = 32767;                   // short max
    int in = 2147483647;                // int max
    long lo = 2147483647;               // long max
    long long ll = 9223372036854775807; // long long max
    printf("%d %d %ld %lld\n", sh, in, lo, ll);

    // unsigned int
    unsigned int unSigned;
    unSigned = 4294967295; // unsigned int max
    printf("%d\n", unSigned);
    unSigned = -1;
    printf("%u\n", unSigned);

    // float
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;
    printf("float  %.20f\n", ft);  // float형은 유효 숫자 7자리
    printf("double %.20lf\n", db); // double형은 유효 숫자 15자리

    // char
    char fruit[20] = "strawberry";
    printf("%s\n", fruit);
    printf("%s %s\n", fruit, "jam");
    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    // const
    int income = 0;
    double tax;
    const double tax_rate = 0.12; // 선언과 동시에 초기화

    income = 456;
    tax = income * tax_rate;
    printf("세금은 %.1lf입니다.\n", tax);

    return 0;
}