#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int upper = 0, lower = 0, digit = 0, other = 0;
    printf("Enter a string: ");
    gets(str);
    char *ptr = str;
    while (*ptr) {
        if (isupper(*ptr)) 
        {
            upper++;
        } 
        else if (islower(*ptr))
         {
            lower++;
        } 
        else if (isdigit(*ptr))
         {
            digit++;
        } 
        else 
        {
            other++;
        }
        ptr++;
    }
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Other characters: %d\n", other);
    return 0;
}
