#include<stdio.h>
void main()
{
    int n,a,d,l,sum=0;
    printf("\n enter the values of N A D ");
    scanf("%d %d %d",&n,&a,&d);
    l=(n*d)+a-1;
    sum=((a+l)*n)/2;
    printf("\n %d",sum);
}
