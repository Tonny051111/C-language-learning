#include <stdio.h>

// Function to compute the n-th order Legendre polynomial using recursion
double legendre_polynomial(int n, double x) {
    if (n == 0) {
        return 1.0;
    } else if (n == 1) {
        return x;
    } else {
        return ((2 * n - 1) * x * legendre_polynomial(n - 1, x) - (n - 1) * legendre_polynomial(n - 2, x)) / n;
    }
}

int main() {
    int n;
    double x;

    printf("Enter the order of the Legendre polynomial (n): ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = legendre_polynomial(n, x);
    printf("P_%d(%lf) = %lf\n", n, x, result);

    return 0;
}