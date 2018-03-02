#include<stdio.h>
void main()
{
    int p,t,r;
    scanf("%d %d %d",&p,&t,&r);
    int si;
    si=((p*t*r)/100);
    printf("%d",floor(si));
}
