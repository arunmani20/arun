#include<stdio.h>
void main()
{
    int n,reverse=0,t;
    scanf("%d",&n);
    while(n>0)
    {
       t=n%10;
       reverse=reverse*10+t;
       n=n/10;
    }
printf("\n reverse number is %d",reverse);
}
