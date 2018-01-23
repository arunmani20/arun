#include<stdio.h>
int main()
{
int n1,k1,s[25],i;
printf("N&k value:");
scanf("%d %d",&n1,&k1);

for(i=1;i<=n1;i++)
{
    scanf("%d",&s[i]);
}
for(i=1;i<n1;i++)
{
    int tem;
    for(int j=i+1;j<=n1;j++)
    {
    if(s[i]>s[j])
    {
        tem=s[i];
        s[i]=s[j];
        s[j]=tem;
    }
    }
}
    printf("%d",s[k1]);
    return 0;
}
