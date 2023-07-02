#include <math.h>
#include <stdio.h>
#include <string.h>

char *change_char(char *ps);

int main(void) {
    char str[80];
    strcpy(str, "wine");                   // wine
    strcat(str, "apple");                  // wineapple
    strncpy(str, "pear", 1);               // pineapple
    printf("%s, %ld\n", str, strlen(str)); // pineapple, 9

    char str2[80] = "kiwi", str3[80] = "banana", str4[80] = "pineapple";
    printf("str2 change : %s\n", change_char(str2));
    printf("str3 change : %s\n", change_char(str3));
    printf("str4 change : %s\n\n", change_char(str4));

    char str5[80] = "banana", str6[80] = "grape", str7[80] = "kiwi", temp[20];
    if (strcmp(str5, str6) > 0) {
        strcpy(temp, str5);
        strcpy(str5, str6);
        strcpy(str6, temp);
    }
    if (strcmp(str5, str7) > 0) {
        strcpy(temp, str5);
        strcpy(str5, str7);
        strcpy(str7, temp);
    }
    if (strcmp(str6, str7) > 0) {
        strcpy(temp, str6);
        strcpy(str6, str7);
        strcpy(str7, temp);
    }
    printf("%s %s %s\n", str5, str6, str7);
}

char *change_char(char *ps) {
    char *po = ps;
    int cnt = 1;
    while (*ps != '\0') {
        if (cnt > 5) {
            *ps = '*';
        }
        ps++;
        cnt++;
    }
    return po;
}