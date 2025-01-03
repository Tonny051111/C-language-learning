#include <stdio.h>

int main() {
    int a[10] = {6, 9, 12, 9, 8, 20, 9, 6, 15, 5};
    int x, i, j;
    int n = 10;
    printf("Enter the number to delete: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}