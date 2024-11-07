#include <stdio.h>
int main()
{
    FILE *fp;
//以写的方式打开文件 test.txt 默认文件路径和源程序文件 c2 11.c 相同
    fp=fopen("test.txt","w");
    printf("春眠不觉晓\n\
    处处闻啼鸟\n\
    夜来风雨声\n\
    花落知多少"); //输出到屏幕
    fprintf(fp,"春眠不觉晓\n\
    处处闻啼鸟\n\
    夜来风雨声\n\
    花落知多少"); //输出到文件
    fclose(fp);
    return 0;
}