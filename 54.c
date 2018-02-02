#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    printf("\n the number is %d",n);
    if(n%2==0)
    {
        printf("\n  the even number %d ",n);
    }
      else
      {
          printf("\n the is nearest  even number is %d",n-1);
      }

}
