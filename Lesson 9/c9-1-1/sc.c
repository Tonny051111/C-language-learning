#include <stdio.h>
int main()
{
char ch[ ]={'c','o','m','p','u','t','e','r'};
int i;
for(i=0;i<8;i++)
printf("%c",ch[i]);
printf("\n");
printf("���� ch �Ĵ�СΪ��%d\n",sizeof(ch)/sizeof(char));
return 0;
}