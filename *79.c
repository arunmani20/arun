#include<stdio.h>
#include<string.h>
void main()
{
    char s[25];
    scanf("%s",s);
    int a;
    a=strlen(s);
    if((a%2)!=0)
    {
        int l;
        l=a/2;
        s[l]='*';
        printf("%s",s);
    }
    else
    {
        int l;
        l=a/2;
        s[l]='*';
        s[l-1]='*';
        printf("%s",s);
    }
}
