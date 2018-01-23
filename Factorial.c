#include<stdio.h>
void main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    
}
 
