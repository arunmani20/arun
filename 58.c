#include<stdio.h>
void main()
{
    int s1,s2;
    scanf("%d %d",&s1,&s2);
    printf("\n  Before Swapping The Numbers are %d %d",s1,s2);
    s1=s1^s2;
    s2=s1^s2;
    s1=s1^s2;
    printf("\n After swapping the numbers are %d %d",s1,s2);
    
}
