#include <stdio.h>
int main()
{
    int a,b,c,d;
    float e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e = (b+c+d)/3;
    FILE *fp;
    fp=fopen("score_avg.txt","w");
    fprintf(fp,"学号     高数    英语    C语言   平均分\n"); 
    fprintf(fp,"%d     %d      %d      %d     %.2f",a,b,c,d,e); 
    fclose(fp);
    return 0;
}
