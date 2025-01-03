# include <stdio.h>
int main()
{
    char s[20];
    int i;
    printf("please input string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='A'&&'Z'>=s[i]) s[i]=s[i]+'a'-'A';
    puts(s);
    return 0;
}
