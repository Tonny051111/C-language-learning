#include <stdio.h>
int main( )
{
    int a[5]={10,20,30,40,50};
    int i;
    printf("输出数组 a 中所有元素的值:\n");
    for(i=0;i<5;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}
