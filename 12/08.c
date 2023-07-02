#include <stdio.h>
#include <string.h>

int main(void) {
    // strcpy
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";
    char *ps2 = str2;

    printf("str1 before: %s\n", str1);
    strcpy(str1, str2);                // str1 <- str2
    printf("str1 after : %s\n", str1); // apple

    strcpy(str1, ps1);                 // str1 <- ps1
    printf("str1 after : %s\n", str1); // banana

    strcpy(str1, ps2);                 // str1 <- ps2
    printf("str1 after : %s\n", str1); // apple

    strcpy(str1, "banana");              // str1 <- "banana"
    printf("str1 after : %s\n\n", str1); // banana

    // strncpy
    char str3[20] = "mango tree";
    strncpy(str3, "apple-pie", 5);       // str3 <- "apple-pie"
    printf("str3 after : %s\n\n", str3); // apple tree

    // strcat, strncat
    char str4[80] = "straw";
    strcat(str4, "berry");
    printf("str4 after : %s\n", str4); // strawberry
    strncat(str4, "piece", 3);
    printf("str4 after : %s\n\n", str4); // strawberrypie

    // strlen
    char str5[80] = "banana", str6[80] = "strawberry";
    char *resp;

    if (strlen(str5) > strlen(str6))
        resp = str5;
    else
        resp = str6;
    printf("%s is longer.\n\n", resp);

    // strcmp, strncmp
    char str7[80] = "pear", str8[80] = "peach";
    printf("strcmp : ");
    if (strcmp(str7, str8) > 0) // compare ascii code
        printf("%s is greater than %s\n\n", str7, str8);
    else
        printf("%s is less than %s\n\n", str7, str8);

    printf("strncmp : ");
    if (strncmp(str7, str8, 3) == 0) // compare ascii code
        printf("%s is equal to %s\n\n", str7, str8);
    else
        printf("%s is not equal to %s\n\n", str7, str8);

    return 0;
}