#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[15]={'a','e','i','o','u'};
int i,j,cou=0,n;
printf("Enter the string");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            cou=1;
        
        }
    }
}
if(cou==1)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
