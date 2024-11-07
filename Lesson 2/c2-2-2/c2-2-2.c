#include <stdio.h>
int main( )
{
    double r,area,circu; //圆的半径、面积、周长
    printf("Input r:");
/**************found************/
    scanf("%lf",&r);//键盘输入变量r 的值，注意r 的数据类型是double
    area=3.1415926*r*r;
    circu=2*3.1415926*r;
/**************found************/
    printf("r=%lf",r);
    printf("area=%lf",area); 
    printf("circu=%lf",circu); //输出r、area、circu 的值
    return 0;
}