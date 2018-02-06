#include<stdio.h>
int main()
{
    int f=0,s=1,n;
    int li;
    scanf("%d",&li);
    printf(" %d %d",f,s);
    int i;
    for(i=2;i<li;i++)
    {
        n=f+s;
        f=s;
        s=n;
    printf("\n %d",n);
    }
}
