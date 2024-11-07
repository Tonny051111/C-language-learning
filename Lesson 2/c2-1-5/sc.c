#include <stdio.h>
int main()
{
    int x,y,sum; //定义整型变量
    printf("Input x and y:\n");
    scanf("%d",&x); //从键盘输入为整型变量 x 的值
    scanf("%d",&y); //从键盘输入整型变量 y 的值
    sum=x+y;
    printf("x+y=%d",sum); //输出整型变量 sum 的值
    return 0;
}
