#include<stdio.h>
void main()
{
char s[10];
printf("Enter the  string");
scanf("%s",s);
if(s[0]>=0|| s[0]<=9)
   printf(" valid yes");
else
   printf("not valid no");
}
