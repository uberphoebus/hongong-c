#include <stdio.h>

typedef struct score {
    int num;
    char name[20];
    int kor, eng, mat;
    int tot;
    double avg;
    char grade;
} Student;

void calc_data(Student *pary);
void sort_data(Student *pary);
void print_data(Student *pary);

int main(void) {
    Student ary[5] = {
        {315, "A", 80, 75, 90, 0, 0}, {316, "B", 88, 92, 100, 0, 0},
        {317, "C", 95, 99, 98, 0, 0}, {318, "D", 84, 70, 72, 0, 0},
        {319, "E", 60, 65, 40, 0, 0},
    };

    calc_data(ary);

    printf("# 정렬 전...\n");
    print_data(ary);
    sort_data(ary);
    printf("# 정렬 후...\n");
    print_data(ary);

    return 0;
}

void calc_data(Student *pary) {
    for (int i = 0; i < 5; i++) {
        pary->tot = pary->kor + pary->eng + pary->mat;
        pary->avg = pary->tot / 3.0;

        if (pary->avg >= 90.0)
            pary->grade = 'A';
        else if (pary->avg >= 80.0)
            pary->grade = 'B';
        else if (pary->avg >= 70.0)
            pary->grade = 'C';
        else if (pary->avg >= 60.0)
            pary->grade = 'D';
        else
            pary->grade = 'F';
        pary++;
    }
}

void sort_data(Student *pary) {
    Student temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (pary[j].tot < pary[j + 1].tot) {
                temp = pary[j];
                pary[j] = pary[j + 1];
                pary[j + 1] = temp;
            }
        }
    }
}

void print_data(Student *pary) {
    for (int i = 0; i < 5; i++) {
        printf("%5d %5s %5d %5d %5d %5d %7.1lf %5c\n", pary[i].num,
               pary[i].name, pary[i].kor, pary[i].eng, pary[i].mat, pary[i].tot,
               pary[i].avg, pary[i].grade);
    }
}