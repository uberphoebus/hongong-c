#include <stdio.h>

void print_month(int *mp);
void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);
int find_num(int *lotto_nums, int num);

int main(void) {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    print_month(month);

    int lotto_nums[6];
    input_nums(lotto_nums);
    print_nums(lotto_nums);

    return 0;
}

void print_month(int *mp) {
    int i;
    for (i = 0; i < 12; i++) {
        printf("%5d ", mp[i]);
        if (i % 5 == 4)
            printf("\n");
    }
    printf("\n\n");
}

void input_nums(int *lotto_nums) {
    int count = 1;
    while (count < 7) {
        int num;
        printf("번호 입력 : ");
        scanf("%d", &num);

        int find_num_result = find_num(lotto_nums, num);
        if (find_num_result == 1) {
            printf("같은 번호가 있습니다!\n");
            continue;
        } else {
            lotto_nums[count - 1] = num;
            count++;
        }
    }
    return;
}
void print_nums(int *lotto_nums) {
    printf("로또 번호 :");
    for (int i = 0; i < 6; i++) {
        printf("%4d ", lotto_nums[i]);
    }
    printf("\n\n");
}

int find_num(int *lotto_nums, int num) {
    for (int i = 0; i < 6; i++) {
        if (lotto_nums[i] == num) {
            return 1;
        }
    }
    return 0;
}