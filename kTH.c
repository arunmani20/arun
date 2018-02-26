#include<stdio.h>
void main()
{
    int a[10],i,n,k;
    printf("\n enter the n and k values ");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\n %d",a[k-1]);
}
