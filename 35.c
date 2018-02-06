#include<stdio.h>
#include<string.h>
void main()
{     int inc=0;
    char s[25];
    scanf("%s",s);
    printf("\n the string is %s",s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            inc++;
        }

    }
printf("\n %d",inc);
}
