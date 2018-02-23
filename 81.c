#include <stdio.h>
void main()
{
    int m[10],n[10],t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&m[i],&n[i]);
    }

    for(i=0;i<t;i++)
    {
        printf("\n%d",n[i]-m[i]);
    }

    
}
