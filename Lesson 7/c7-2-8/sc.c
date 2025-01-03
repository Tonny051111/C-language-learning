#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int x, i, j;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            found = 1;
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            break;
        }
    }

    if (found) {
        printf("Updated array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Not found.\n");
    }

    return 0;
}