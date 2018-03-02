#include<stdio.h>
#include<string.h>
void main()
{
int n,i;
char str[10];
printf("Enter the position:");
scanf("%d",&n);
printf("Enter the string:");
scanf("%s",str);
printf("The string is:");
int l;
l=strlen(str);
for(i=l;i>=n;i--)
{
printf("%c",str[i]);
}

}
