#include<stdio.h>
void main()
{
 int i;
 int count=0,c=0,total;
 char a[20];
 printf("Enter string : ");
 scanf(" %s",a);
 for(i=0; a[i]!='\0'; i++)
 {
   count++;
 }
 for(i=0;i<count;i++)
 {
    if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    {
        count++;
    }
 }
printf("%d",count);
}
