#include <stdio.h>
#include <math.h>
int main()
{ 
    int n;
    double pai,a,t;
    n=1;
    a=1;
    t=1+(1.0/(n*(n+2)));
    while(fabs(t)>=(1.0E-6))
    {
        a=a*t;
        n=n+2;
        t=1+(1.0/(n*(n+2)));
    }
    pai=a*2;
    printf("pai的近似值为%lf\n",pai);
    return 0;
}