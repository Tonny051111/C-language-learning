#include <stdio.h>
int main()
{
    int a;
    float d;
    char c1;
    double f;
    long m;
    unsigned p;
    scanf("%d,%c,%f,%f,%d,%u",&a,&c1,&d,&f,&m,&p);
    printf("a=%d\nc1=%c\nd=%15.6f\n",a,c1,d);
    printf("f=%f\nm=%d\np=%o\n",f,m,p);
    return 0;
}