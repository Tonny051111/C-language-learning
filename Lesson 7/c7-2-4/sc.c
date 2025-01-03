#include <stdio.h>
int main()
{
/************found************/
    int a[10]={10,4,2,7,3,12,5,34,5,9},i;
    float aver, s;
/************found************/
    s = 0.0;
    for ( i=0; i<10; i++)
        s = s+a[i];
    aver = s / i;
    printf("The aver is: %.2f\n", aver);
    return 0;
}
