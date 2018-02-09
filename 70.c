#include<stdio.h>
void  main()
{
int num,y=0,x=1,p=2,i;
printf("Enter the number:");
scanf("%d",&num);
while(num!=1)
{
num=num/2;
y++;
}
for(i=0;i<y+1;i++)
{
x=x*p;
}
printf("%d",x);
}
