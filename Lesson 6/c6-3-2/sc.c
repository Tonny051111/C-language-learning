#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    long long int num_points = 1000000;
    long long int inside_circle = 0;
    double x, y;
    double pi;

    srand(time(NULL));

    for (long long int i = 0; i < num_points; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1) {
            inside_circle++;
        }
    }

    pi = (double)inside_circle / num_points * 4;
    printf("Estimated value of Pi: %f\n", pi);

    return 0;
}