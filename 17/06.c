#include <stdio.h>

struct score {
    int kor;
    int eng;
    int math;
};

int main(void) {
    struct score yuni = {90, 80, 70};
    struct score *ps = &yuni; // ps is a pointer to struct score

    printf("Korean: %d\n", (*ps).kor); // (*ps).kor is the same as ps->kor
    printf("English: %d\n", ps->eng);
    printf("Math: %d\n", ps->math);

    return 0;
}