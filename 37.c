#include<stdio.h>
void main()
{
    int x1,x2;
    scanf("%d %d",&x1,&x2);
    printf("\n the numbers before swap are %d %d",x1,x2);
    x1=x1+x2;
    x2=x1-x2;
    x1=x1-x2;
    
    printf("\n the numbers after  swap are %d %d",x1,x2);
    
}
