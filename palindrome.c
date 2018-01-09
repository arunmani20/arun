#include<stdio.h>
void main()
{
int a,r=0,n,s;
printf("\n Enter the Number");
scanf("%d",&a);
n=a;
while(n>0)
{
    s=n%10;
    r=r*10+s;
    n=n/10;
}
if(a==r)
{
    printf(" yes palindrome");
}
else
{
    printf("no");
}
}
