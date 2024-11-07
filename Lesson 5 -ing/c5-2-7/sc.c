#include <stdio.h>
int main()
{
    int m,n,t;
    int i=0,s=0;
    printf("请输入整数m,n:");
    scanf("%d,%d",&m,&n);
    if(m>n)
        {
            t = m;
            m = n;
            n = t;
        }
    for(i=m;i<=n;i++)
        {
            if((i%3!=0) && (i%7!=0))
                s = s + i;
        }
    printf("Sum is : %d \n",s);
    return 0;
}