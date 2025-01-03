#include <stdio.h>
#include <string.h>
#define NAME_COUNT 20
#define NAME_LENGTH 50
int main() {
    char names[NAME_COUNT][NAME_LENGTH] = {
        "John", "Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hank", "Ivy",
        "Jack", "Kathy", "Liam", "Mona", "Nina", "Oscar", "Paul", "Quincy", "Rachel", "Steve"
    };

    char temp[NAME_LENGTH];
    for (int i = 0; i < NAME_COUNT - 1; i++) {
        for (int j = i + 1; j < NAME_COUNT; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Sorted names:\n");
    for (int i = 0; i < NAME_COUNT; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}