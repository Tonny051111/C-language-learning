#include <stdio.h>
#include <math.h>
int main() {
    int primes[100];
    int count = 0;
    for (int num = 2; num < 100; num++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primes[count++] = num;
        }
    }
    printf("Primes less than 100:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
    return 0;
}