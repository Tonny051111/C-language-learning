#include <stdio.h>
int main( )
{
    double r,area,circu; //Բ�İ뾶��������ܳ�
    printf("Input r:");
/**************found************/
    scanf("%lf",&r);//�����������r ��ֵ��ע��r ������������double
    area=3.1415926*r*r;
    circu=2*3.1415926*r;
/**************found************/
    printf("r=%lf",r);
    printf("area=%lf",area); 
    printf("circu=%lf",circu); //���r��area��circu ��ֵ
    return 0;
}