#include<stdio.h>
#include<string.h>
void main()
{
    int n,k,i,a[23],tem[30],j=0;
    scanf("%d %d",&n,&k);
    printf("the values of n and k are %d %d",n,k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the array values are");
     for(i=0;i<n;i++)
    {
        printf(" \t  %d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)!=0)
        {
            tem[j]=a[i];
            j++;
        }
    }
    printf("\n  the value is %d",tem[k-1]);
    }
    

    
