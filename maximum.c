#include<stdio.h>
void main()
{
    int a[15],n,i,maximum;
    printf("\n Enter how many elements");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
maximum=a[0];
 for(i=0;i<n;i++)
 {
     if(a[i]>maximum)
     { maximum=a[i];
     }
 }
 printf("\n maximum element is %d",maximum);
}
