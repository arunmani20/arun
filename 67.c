#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    printf("\n the number is %d",n);
    if(n%10)
    {
        int y=n+(10-n%10);
        printf("\n nearest multiple of %d is  %d",n,y);
    }
    
}
