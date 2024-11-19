#include <stdio.h>

int main() {
    int steps = 0;
    while (1) {
        if (steps % 2 == 1 &&
            steps % 3 == 2 &&
            steps % 5 == 4 &&
            steps % 6 == 5 &&
            steps % 7 == 0) {
            break;
        }
        steps++;
    }
    printf("The total number of steps is: %d\n", steps);
    return 0;
}