#include <stdio.h>

int main() {
    int num1, num2 = 0;

    printf("请输入一个正整数: ");
    scanf("%d", &num1);

    while (num1 != 0) {
        num2 = num2 * 10 + num1 % 10;
        num1 = num1 / 10;
    }

    printf("逆序输出: %d\n", num2);

    return 0;
}