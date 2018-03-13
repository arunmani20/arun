#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10];
    printf("\n Enter the String");
    scanf("%s",ch);
    int i,cou=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            cou++;
        }
    }
    if(cou>0)
    {
        printf("\n Not an Isogram");
    }
    else
    {
        printf("\n Isogram");
    }
}
