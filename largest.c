#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is biggest number");
elseif(b>c&&b>a)
printf("b is biggest number");
else 
printf("c is biggest number");
}
