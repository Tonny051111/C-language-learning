#include<stdio.h>
int main()
{
    int a,b,t;
/**************found************/
    printf("输入变量a、b的值：");
    scanf("%d%d",&a,&b);
    printf("交换前：a=%d,b=%d\n",a,b);
    t=a;
    a=b;
    b=t;   /* 以上三条赋值语句实现 a,b变量值的交换
/**************found************/
    printf("交换后：a=%d,b=%d\n",a,b);//此处填写输出变量 a、b的值的语句
    return 0;
}