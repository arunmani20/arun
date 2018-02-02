#include<stdio.h>
void main()
{
    int num,rev=0,n;
    scanf("%d",&num);
    while(num>0)
    {
        n=num%10;
        rev=rev*10+n;
        num=num/10;
        
    }
    int rr=0;
    while(rev>0)
    {
        rr=rev%10;
        printf("\n %d",rr);
        rev=rev/10;
    }
}
