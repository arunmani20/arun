#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[10];
    int i;
    scanf("%s",&s);
    printf("the string is %s",s);
    if(isalpha(s)&& isdigit(s))
    { 
        printf("\n yes");
    }
    else
    {
        printf("\n no");
    }
}
