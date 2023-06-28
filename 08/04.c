#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80] = "applejam";

    printf("initial char : %s\n", str);
    printf("input char   :\n");
    // scanf("%s", str);
    printf("after input  : %s\n", str);

    char str1[80] = "cat";
    char str2[80];

    // strcpy
    strcpy(str1, "tiger"); // str1 = "tiger"
    strcpy(str2, str1);    // str2 = str1
    printf("%s, %s\n", str1, str2);

    // gets, puts
    char str3[80] = "cat";
    printf("input char : ");
    gets(str3);             // input with space
    puts("output char : "); // output with space
    puts(str3);

    char str4[5] = "cat";
    str4[0] = '0';
    str4[1] = 'K';
    printf("%s\n", str4); // "0Kt"

    char str5[80] = "DON'T Worry, Be Happy~";
    int count = 0;
    for (int i = 0; i < strlen(str5); i++) {
        if (str5[i] >= 'A' && str5[i] <= 'Z') {
            str5[i] += 32;
            count++;
        }
    }
    printf("%s\n", str5);
    printf("count : %d\n", count);

    return 0;
}