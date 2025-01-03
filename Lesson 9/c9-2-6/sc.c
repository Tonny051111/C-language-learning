#include <stdio.h>

int main() {
    char input[81];
    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;

    printf("Enter a line of text (max 80 characters): ");
    gets(input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            upper++;
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            lower++;
        } else if (input[i] >= '0' && input[i] <= '9') {
            digit++;
        } else if (input[i] == ' ') {
            space++;
        } else {
            other++;
        }
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Spaces: %d\n", space);
    printf("Other characters: %d\n", other);

    return 0;
}