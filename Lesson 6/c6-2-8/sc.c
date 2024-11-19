#include <stdio.h>

int main() {
    int n = 20;
    double a = 2.0, b = 1.0;
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += a / b;
        double temp = a;
        a = a + b;
        b = temp;
    }

    printf("The sum of the first 20 terms is: %lf\n", sum);
    return 0;
}