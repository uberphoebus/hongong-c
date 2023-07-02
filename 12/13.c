#include <stdio.h>

char *my_strcpy(char *pd, char *ps);
char *my_strcat(char *pd, char *ps);
int my_strlen(char *ps);
int my_strcmp(char *pa, char *pb);

int main(void) {

    // strcpy
    char str1[80] = "strawberry";
    printf("str1 before : %s\n", str1);
    my_strcpy(str1, "apple");
    printf("str1 after  : %s\n", str1);
    printf("str1 after  : %s\n\n", my_strcpy(str1, "kiwi"));

    // strcat
    char str2[80] = "straw";
    printf("str2 before : %s\n", str2);
    my_strcat(str2, "berry");
    printf("str2 after  : %s\n", str2);
    printf("str2 after  : %s\n\n", my_strcat(str2, "pie"));

    // strlen
    char str3[80] = "banana";
    printf("str3 length : %d\n\n", my_strlen(str3));

    // strcmp
    char str4[80] = "pear", str5[80] = "peach";
    printf("strcmp(pear, peach) : %d\n\n", my_strcmp(str4, str5));

    return 0;
}

char *my_strcpy(char *pd, char *ps) {
    char *po = pd;
    while (*ps != '\0') {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return po;
}

char *my_strcat(char *pd, char *ps) {
    char *po = pd;
    while (*pd != '\0')
        pd++;
    while (*ps != '\0') {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}

int my_strlen(char *ps) {
    int len = 0;
    while (*ps != '\0') {
        len++;
        ps++;
    }
    return len;
}

int my_strcmp(char *pa, char *pb) {
    while ((*pa == *pb) && (*pa != '\0')) {
        pa++;
        pb++;
    }
    if (*pa > *pb)
        return 1;
    else if (*pa < *pb)
        return -1;
    else
        return 0;
}
