#include <stdio.h>
int main( )
{
    char ch;
    printf("Input ch:");
/**************found************/
    ch=getchar(); //用 getchar()函数从键盘输入变量 ch 的值
    ch=ch+32; //大小写 ASCII 码值相差 32
/**************found************/
    putchar(ch); //用 putchar()函数输出变量 ch 的值
/**************found************/
    printf("\nch=%d\n",ch); //用 printf()函数输出变量 ch 的 ASCII 值
    return 0;
}
