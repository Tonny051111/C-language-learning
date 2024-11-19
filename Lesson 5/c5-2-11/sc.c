#include <stdio.h>
int main()
{ 
    int i;
    double a=0,b=0,n=0.01;
    a=100000 * 30;
    for(i=1;i<=30;i++)
    {
        n = i * n;
        b = b + n ;
    }
    printf("陌生人支出:%lf元\n",a);
    printf("富豪支出:%lf元\n",b);
    return 0;
}