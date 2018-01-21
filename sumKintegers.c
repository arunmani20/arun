#include<stdio.h>
void main() 
{
int i,j,N,k,sum=0;
scanf("%d %d",&N,&k);
printf("Input\n %d %d\n",N,k);
for(i=1;i<=N;i++)
{
printf("%d",i);
}
for(j=1;j<=k;j++)
{
sum=sum+j;
}
printf("\nOutput\n %d \n",sum);
}
