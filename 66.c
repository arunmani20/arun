#include<stdio.h>
void main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
         if(n%i==0)
          count++;
    }
    if(count==0)
    {
         printf("\n the number is prime");
    }
    else
    {
        printf("\n number is not prime");
    }
}
