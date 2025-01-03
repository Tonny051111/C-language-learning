#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i += 2) 
    {
        sum += a[i];
    }

    printf("Sum of elements at even indices: %d\n", sum);
    return 0;
}