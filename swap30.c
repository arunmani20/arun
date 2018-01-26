#include<stdio.h>
void main()
{
    int n1,n2,temp;
    scanf(" %d %d",&n1,&n2);
    printf("\n before swap the numbers are",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n afte swap the numbers are %d %d",n1,n2);
}
