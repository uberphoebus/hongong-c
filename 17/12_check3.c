#include <stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void) {
    COLOR my_color = YELLOW, c;
    ARROW direction = UP;

    for (c = CYAN; c <= BLACK; c++) {
        direction++;
        direction = direction % 4;
        if (c == my_color)
            break;
    }

    switch (direction) {
    case UP:
        printf("UP\n");
        break;
    case DOWN:
        printf("DOWN\n");
        break;
    case LEFT:
        printf("LEFT\n");
        break;
    case RIGHT:
        printf("RIGHT\n");
        break;
    }

    return 0;
}