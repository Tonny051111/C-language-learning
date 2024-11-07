#include<stdio.h>
int main( )
{
    float r,h,c,s,v;
    printf("输入半径与高：");
    scanf("%f%f",&r,&h);
    c = 2*3.1415*r;
    s = 3.1415*r*r;
    v = s*h;
    printf("周长为%.2f\n",c);
    printf("面积为%.2f\n",s);
    printf("体积为%.2f\n",v);
}