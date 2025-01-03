#include <stdio.h>
int main() {
    int a[11] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int n = 10;
    int x, i, j;
    printf("Enter an integer to insert: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] > x) {
            break;
        }
    }
    for (j = n; j > i; j--) {
        a[j] = a[j - 1];
    }
    a[i] = x;
    n++;
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}