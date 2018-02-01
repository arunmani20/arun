#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int d=n1-n2;
    if(d%2==0)
    {
        printf("\n EVEN");
    }
    else
    {
        printf("\n ODD");
    }
}
