#include <stdio.h>
#include <math.h>

double f(double x) {
    return x * x * x - x * x - 1;
}

int main() {
    double low = 0.0, high = 3.0, mid;
    double epsilon = 1e-6;

    while ((high - low) >= epsilon) {
        mid = (low + high) / 2.0;
        if (f(mid) == 0.0) {
            break;
        } else if (f(mid) * f(low) < 0) {
            high = mid;
        } else {
            low = mid;
        }
    }

    printf("The root is: %lf\n", mid);
    return 0;
}