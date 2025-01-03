#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], t[100];
    int i;
    gets(s);
    for(i = 0; i < strlen(s); i++)
    {
        t[strlen(s)-i-1] = s[i];
    }
    t[strlen(s)] = '\0';
    printf("%s\n", t);
return 0;
}