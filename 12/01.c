#include <stdio.h>

int main(void) {
    printf("apple addr             : %p\n", "apple");
    printf("apple second char addr : %p\n", "apple" + 1);
    printf("apple first char       : %c\n", *"apple");
    printf("apple second char      : %c\n", *("apple" + 1));
    printf("apple third char       : %c\n\n", "apple"[2]);

    char *dessert = "apple";
    printf("dessert1 : %s\n", dessert);
    dessert = "banana";
    printf("dessert2 : %s\n\n", dessert);

    return 0;
}