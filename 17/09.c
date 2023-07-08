#include <stdio.h>

struct list {
    int num;
    struct list *next; // pointer to struct list
};

int main(void) {
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
    struct list *head = &a, *current; // head points to a

    a.next = &b; // a.next points to b
    b.next = &c; // b.next points to c

    printf("head -> num : %d\n", head->num); // head->num == (*head).num
    printf("head -> next -> num : %d\n", head->next->num); // b.num

    printf("list all : ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");

    return 0;
}