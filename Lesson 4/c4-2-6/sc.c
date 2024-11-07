#include <stdio.h>
int main()
{
long int a;
int place,gew,shiw,baiw,qianw,wanw;
printf("请输入一个0~99999之间的整数：");
scanf("%ld",&a);
if (a<0||a>99999)
printf("错误");
else
{
if (a>9999)
place=5;
else if (a>999)
place=4;
else if (a>99)
place=3;
else if (a>9)
place=2;
else
place=1;
printf("位数：%d\n",place);
gew=a%10;
shiw=(a/10)%10;
baiw=(a/100)%10;
qianw=(a/1000)%10;
wanw=(a/10000)%10;
printf("每位数为：");
switch (place){
case 5:
printf("%d%d%d%d%d",wanw,qianw,baiw,shiw,gew);
printf("\n逆序为：");
printf("%d%d%d%d%d",gew,shiw,baiw,qianw,wanw);
break;
case 4:
printf("%d%d%d%d",qianw,baiw,shiw,gew);
printf("\n逆序为：");
printf("%d%d%d%d",gew,shiw,baiw,qianw);
break;
case 3:
printf("%d%d%d",baiw,shiw,gew);
printf("\n逆序为：");
printf("%d%d%d",gew,shiw,baiw);
break;
case 2:
printf("%d%d",shiw,gew);
printf("\n逆序为：");
printf("%d%d",gew,shiw);
break;
case 1:
printf("%d",gew);
printf("\n逆序为：");
printf("%d",gew);
break;




}

}

}
