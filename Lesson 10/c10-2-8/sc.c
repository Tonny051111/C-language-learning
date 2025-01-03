#include <stdio.h>
int GCD(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int LCM(int m, int n) {
    return (m * n) / GCD(m, n);
}
int main() {
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    int gcd = GCD(m, n);
    int lcm = LCM(m, n);
    printf("GCD of %d and %d is %d\n", m, n, gcd);
    printf("LCM of %d and %d is %d\n", m, n, lcm);
    return 0;
}