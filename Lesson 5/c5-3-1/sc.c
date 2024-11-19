#include <stdio.h>
int main()
{
    int a,b,c,d;
    float e;
    FILE *fp1,*fp2;
    fp1=fopen("score.txt","r");
    fp2=fopen("score_avg.txt","w");
    printf("学号     高数    英语    C语言   平均分\n"); 
    fprintf(fp2,"学号     高数    英语    C语言   平均分\n"); 
    while((fscanf(fp1,"%d%d%d%d",&a,&b,&c,&d)) != EOF)
    {
        e = (b+c+d)/3.0;
        printf("%d     %d      %d      %d     %.2f\n",a,b,c,d,e); 
        fprintf(fp2,"%d     %d      %d      %d     %.2f\n",a,b,c,d,e); 
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}