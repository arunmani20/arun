#include<stdio.h>
void  main()
{
int minutes,val=60,h,m;
printf("enter the  minutes");
scanf("%d",&minutes);
if(minutes>val)
{h=minutes/val;
m=minutes%val;
printf(" \n%d  %d",h,m);
}
else
{
printf("\n 0 %d",minutes);
}
}
