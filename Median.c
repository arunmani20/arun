#include<stdio.h>
void main()
{
    int n,a[10],i,sum=0;
    printf("\n enter how many numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    sum=sum+a[i];    
    }
    int median=sum/n;
    printf("\n Median is %d" ,median);
}
    
    
