#include <stdio.h>

struct vision {
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(void) {
    struct vision robot;

    printf("Input the vision: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("The vision after exchange: %lf %lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot) {
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}