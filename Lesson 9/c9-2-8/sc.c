#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], t[100];
    int i,len1,len2;
    gets(s);
    gets(t);
    len1 = strlen(s);
    len2 = strlen(t);
   for(i=0;i<len2;i++)
    {
        s[i+len1] = t[i];
    }
    s[len1+len2] = '\0';
    printf("%s\n", s);
return 0;
}