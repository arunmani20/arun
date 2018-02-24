#include<stdio.h>
void main()
{
    int v1,v2,i,value;
    scanf("%d %d",&v1,&v2);
    printf("\n the numbers are %d %d",v1,v2);
    for(i=1;i<=v1&&i<=v2;i++)
    {
         if(v1%i==0 && v2%i==0)
  value = i;
}
printf("\n gcd is %d",value);
    
}
