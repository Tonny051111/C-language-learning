#include <stdio.h>
int main()
{
	int i,j,a[11][11];
	for(i=0;i<11;i++)
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j+1)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	for(i=0;i<11;i++)
	{
		for(j=0;j<i;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	return 0;
}
