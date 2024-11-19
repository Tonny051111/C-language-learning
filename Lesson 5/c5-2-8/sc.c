#include <stdio.h>
int main( )
{
	char ch;
	int zimu=0,kongge=0,shuzi=0,qita=0;
	ch=getchar(); // （1）
	while(ch!='\n')
	{
		if(('a'<=ch && ch<='z') || ('a'<=ch && ch<='z')) zimu++;
		else if(ch==' ') kongge++;
		else if('0'<=ch && ch<='9') shuzi++;
		else qita++;
		ch=getchar(); // （2）
	}
	printf("字母%d个\n",zimu);
	printf("空格%d个\n",kongge);
	printf("数字%d个\n",shuzi);
	printf("其他字符%d个\n",qita);
	return 0;
}
