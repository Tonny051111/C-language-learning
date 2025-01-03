#include <stdio.h>

int convert(int m, int binary[]) {
    int index = 0;
    while (m > 0) {
        binary[index] = m % 2;
        m = m / 2;
        index++;
    }
    for (int i = 0; i < index / 2; i++) {
        int temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }
    return index;
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    int binary[32];
    int length = convert(decimal, binary);
    printf("Binary representation: ");
    for (int i = 0; i < length; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}