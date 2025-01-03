#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("请输入一个字符串: ");
    gets(str);

    printf("请输入要查找的字符: ");
    ch = getchar();

    printf("字符 '%c' 在字符串中的位置: ", ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("字符串中不包含字符 '%c'\n", ch);
    } else {
        printf("\n字符 '%c' 在字符串中出现的次数: %d\n", ch, count);
    }

    return 0;
}