#include<stdio.h>
#include<string.h>
void main()
{
    int n,k,i,a[23],cou=0;
    scanf("%d %d",&n,&k);
    printf("the values of n and k are %d %d",n,k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the array values are");
     for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            cou++;
        }
    }
    if(cou==1)
    {
        printf("\n yes");
    }
    else
    {
        printf("\n no");
    }
    
}
