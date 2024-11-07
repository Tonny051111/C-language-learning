#include<stdio.h>
int main()
{
    float c,f;
    printf("输入一个华氏温度：");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("对应的摄氏温度是：%.2f",c);
    return 0;
}