#include<stdio.h>
void main()
{
    char s1[10],s2[15];
    int i,j,count=0;
    printf("\n enter the first string");
    scanf(" %s1",&s1);
    printf("\n enter the second string");
    scanf(" %s",s2);
    for(i=0;s1[i]!='\0';i++)
    {count++;
    }i=count;
 for(j=0;s2[j]!='\0';++j,++i)
    {
        s1[i]=s2[j];
    }
    
printf("\n the string is %s",s1);
    }
