#include<stdio.h>
#include<math.h>
void main()
{
int i,val;
scanf("%d",&val);
for(i=1;i<=(val/2);i++)
{
if(pow(2,i)==val)
{
printf("YES");
}
}
}
