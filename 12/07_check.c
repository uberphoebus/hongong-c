#include <stdio.h>

int main(void) {
    char *ps = "applepie";
    ps += 5;
    printf("%s\n", ps); // print pie

    char ani[20];
    char why[80];
    printf("What is your favorite animal? ");
    scanf("%s", ani);
    getchar();

    printf("Why do you like %s? ", ani);
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);

    return 0;
}