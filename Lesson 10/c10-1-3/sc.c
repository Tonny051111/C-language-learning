#include<stdio.h>
void swap(int *m,int *n)
{
	int t;
	t=*m;*m=*n;*n=t; /*数据交换*/
	printf("function swap:\n");
	printf("m=%d,n=%d\n",m,n);
}
int main()
{
	int m,n;
	printf("please input m and n:");
	scanf("%d%d",&m,&n);
	swap(&m,&n); //调用函数 swap()
	printf("function main:\n");
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
