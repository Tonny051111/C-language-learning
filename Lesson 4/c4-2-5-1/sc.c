#include <stdio.h>
int main()
{
    int score;
    printf("请输入你的成绩：");
    scanf("%d",&score);
    if(90<=score && score<=100)
        printf("A");
    else if(80<=score && score<=89)
        printf("B");
    else if(70<=score && score<=79)
        printf("C");
    else if(60<=score && score<=69)
        printf("D");
    else if(0<=score && score<=59)
        printf("E");
    else
        printf("Error");
    return 0;
}