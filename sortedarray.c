#include<stdio.h>
void main()
{
    int a[15],n,i,j;
    printf("\n Enter how many elements");
    scanf("%d",&n);
    printf("\n enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

 for(i=0;i<n-1;i++)
 {
     int sa;
 
  for(j=i+1;j<n;j++)
 { 
     if(a[i]>a[j])
     {
     sa=a[i];
     a[i]=a[j];
     a[j]=sa;
 }
 }
 }
 printf("\n sorted array is");
 for(i=0;i<n;i++)
 {
     printf("\n %d",a[i]);
 }
 
}
