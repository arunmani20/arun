#include<stdio.h>
void main()
{
    char s[5];
    int k,i;
    scanf("%s",&s);
    printf("\n the string is %s",s);
    scanf("%d",&k);
    printf("\n k value is %d",k);
    for(i=1;i<=k;i++)
    {
        printf(" %s",s);
    }
    
}
