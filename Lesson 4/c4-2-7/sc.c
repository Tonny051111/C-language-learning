#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,area;
	printf("请输入三角形三边：");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("三角形面积为%.2f\n",area);
		if(a==b && a==c)
			printf("等边三角形");
		else if((a==b || b==c || a==c) && !(a==b && a==c))
			printf("等腰三角形");
		else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
			printf("直角三角形");
		else
			printf("一般三角形");
	}
	else
		printf("不能组成三角形！");
	return 0;
}
