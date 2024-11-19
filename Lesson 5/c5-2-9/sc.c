#include <stdio.h>
int main( )
{
	int i;
	int p=0,q=1;
	double sum=0;
	for(i=1;i<=20;i++)
	{
		for(p=1;p<=i;p++);
			q=p*q;
		sum=q+sum;
	}
	printf("sum=%lf",sum);
	return 0;
}
