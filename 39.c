#include<stdio.h>
int main()
{
    int a[10],i,num,temp,j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
    for(j=0+i;j<num;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
 for(i=0;i<num;i++)
    {
    printf("\n %d",a[i]);
}

printf("\n maximum is  %d",a[num-1]);
return 0;
}
