#include<stdio.h>
void main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int k=n+m;
    if(k%2==0)
    {
        printf("\n even");
    }
    else
    {
        printf("\n odd");
    }
}
