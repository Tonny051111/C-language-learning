#include <stdio.h>

void printPrimeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point, so we can skip one element (i.e., we can increment i by 2)
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int n;
    printf("请输入一个正整数: ");
    scanf("%d", &n);
    printf("质因子为: ");
    printPrimeFactors(n);
    return 0;
}