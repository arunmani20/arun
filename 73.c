#include<stdio.h>
void main()
{
    int n,l,r;
    scanf(" %d %d %d",&n,&l,&r);
    printf("\n n value is %d",n);
    printf("\n L and R value is %d %d ",l,r);
    if(n>=l && n<=r)
    {
        printf("\n present");
    }
    else
    {
        printf("\n not");
    }
}
