#include <stdio.h>
int main()
{
    int i,j;
    float t,sum;
    for(i=1,sum=0;i<=20;i++)
    {
        t=1.0;
        for(j=1;j<=i;j++)
            t=t*j;
        sum=sum+(1/t);
    }
    printf("sum=%f\n",sum);
    return 0;
}