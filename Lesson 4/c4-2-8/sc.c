#include<stdio.h>
int main()
{
	float h,w,t;
	printf("请输入你的身高(m)：");
	scanf("%f",&h);
	printf("请输入你的体重(kg)：");
	scanf("%f",&w);
	t = w / (h*h);
	if(t<18)
		printf("低体重");
	else if(18<=t && t<25)
		printf("正常体重");
	else if(25<=t && t<27)
		printf("超重体重");
	else
		printf("肥胖");
	return 0;
}
