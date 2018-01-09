#include<stdio.h>
void main()
{
int a,r=0,n,s,i,count=0;
printf("\n Enter the Number");
scanf("%d",&a);
for(i=2;i<a;i++)
{
    if((a%i)==0)
    count++;
}
if(count==0)
{
printf("prime number");
printf("\n");
}
else
{
printf("not prime");
}
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
