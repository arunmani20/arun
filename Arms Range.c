#include<stdio.h>
void main( )
{
int no, temp, rem, sum;

printf("Armstrong numbers between 150 and 160 are:\n");
for(no=150; no<=160; no++)
{
temp=no;
sum=0;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}
if(no==sum)
printf("\n%d", no);
}
}
