#include<stdio.h>
void main()
{
    int n,m,p;
    printf("\n enter the values");
    scanf("%d%d",&n,&m);
    p=n*m;
    printf("%d",p);
    if(p%2==0)
    {
        printf("\n even");
    }
    else
    {
        printf("\n odd");
    }
}
