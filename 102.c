#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n/2);
        n=n/2;
    }
    else
    {
        printf("%d",n);
    }
}
