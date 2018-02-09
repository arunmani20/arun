#include<stdio.h>
#include<string.h>
void main()
{
    int i,n,y=0;
    char a[10];
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            y=y+1;
        }
    }
    if(y==n)
    {
        printf("\n yes");
    }
    else
    {
        printf("no");
    }
}
