#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main(void) {
    // declare an array of struct address
    struct address list[5] = {{"Yuni", 17, "010-1234-5678", "Seoul"},
                              {"Yura", 17, "010-1234-5678", "Seoul"},
                              {"Yuri", 17, "010-1234-5678", "Seoul"},
                              {"Yuna", 17, "010-1234-5678", "Seoul"},
                              {"Yume", 17, "010-1234-5678", "Seoul"}};

    for (int i = 0; i < 5; i++) {
        printf("%10s%5d%20s%20s\n", list[i].name, list[i].age, list[i].tel,
               list[i].addr);
    }

    printf("\n");
    print_list(list);

    return 0;
}

void print_list(struct address *lp) {
    for (int i = 0; i < 5; i++) {
        // lp[i].name == (lp + i)->name == (*(lp + i)).name
        printf("%10s%5d%20s%20s\n", (lp + i)->name, (lp + i)->age,
               (lp + i)->tel, (lp + i)->addr);
    }
}