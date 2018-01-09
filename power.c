#include<stdio.h>
void main()
{
int base,expo;
printf("\n enter the base and power of a number");
scanf("%d %d",&base,&expo);
int i,c=1;
for(i=1;i<=expo;i++)
{
c=c*base;
}
printf( "\n The power value is ",c);
}
