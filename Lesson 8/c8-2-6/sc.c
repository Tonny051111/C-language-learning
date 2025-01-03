#include <stdio.h>
#define n 2
int main()
{
	int i,j,flag,a[n][n];	
	printf("请输入方阵的元素（共%d个）：\n",n*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[i][j]!=a[j][i])
			{
				flag=1;
				break;
			}
	}
	if(flag==0) printf("对称\n");
	else if(flag==1) printf("不对称\n");
	return 0;
}
