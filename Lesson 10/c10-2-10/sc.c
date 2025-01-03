#include <stdio.h>
#include <string.h>
void fun(char str1[],char str2[])
{
	int i,j;
	for(i=0,j=0;str1[i]!='\0';i=i+2,j++)
	{
		str2[j]=str1[i];
	}
	str2[j]='\0';
}

int main()
{
	char str1[80],str2[80],len;
	printf("请输入字符串:");
	gets(str1);
	fun(str1,str2);
	printf("新字符串为:");
	len=strlen(str2);
	str2[len+1]='\0';
	puts(str2);
	return 0;
}