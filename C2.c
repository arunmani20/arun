#include<stdio.h>
void main()
{
    int n,f=1;
    scanf("%d",&n);
    printf("\n the number is %d",n);
    int i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf(" factorial of the number is %d",f);
}
