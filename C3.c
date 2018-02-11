#include<stdio.h>
void main()
{
    int n,s,rev=0;
    scanf("%d",&n);
    printf("\n the number is %d",n);
    while(n>0)
    {
        s=n%10;
        rev=rev*10+s;
        n=n/10;
    }
    printf("\n reverse number is %d",rev);
}
