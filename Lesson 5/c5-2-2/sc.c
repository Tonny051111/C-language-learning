#include <stdio.h> 
int main() 
{   
    int x,sum1,sum2; 
    /**************found************/ 
    sum1 = 0;   sum2 = 0;
    printf("请输入一些整数(输入0时结束输入)：\n"); 
    scanf("%d", &x); 
    while ( x != 0 ) 
    {   
    /**************found************/ 
    if(x>0)
        sum1 = sum1 + x; 
    else 
        sum2 = sum2 + x; 
        scanf("%d", &x); 
    } 
    printf("大于0的整数之和为： %d\n", sum1); 
    printf("小于0的整数之和为： %d\n", sum2);   
    return 0; 
} 