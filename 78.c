#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    printf("\n the number is %d",n);
    if(n%13==0)
    {
        printf("\n multiple of 13");
        
    }
    else
    {
        printf("\n not a multiple");
    }
}
