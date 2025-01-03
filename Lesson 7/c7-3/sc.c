#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 1000

void addLargeNumbers(char A[], char B[], char C[]) {
    int lenA = strlen(A);
    int lenB = strlen(B);
    int carry = 0, sum = 0;
    int i = lenA - 1, j = lenB - 1, k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digitA = (i >= 0) ? A[i--] - '0' : 0;
        int digitB = (j >= 0) ? B[j--] - '0' : 0;
        sum = digitA + digitB + carry;
        C[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    C[k] = '\0';

    // Reverse the result
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = C[start];
        C[start] = C[end];
        C[end] = temp;
    }
}

int main() {
    char A[MAX_DIGITS], B[MAX_DIGITS], C[MAX_DIGITS + 1];

    printf("Enter first large number: ");
    scanf("%s", A);
    printf("Enter second large number: ");
    scanf("%s", B);

    addLargeNumbers(A, B, C);

    printf("Sum: %s\n", C);

    return 0;
}