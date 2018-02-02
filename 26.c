#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    int number;
    scanf("%d",&number);
    printf(" enter the array");
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<number;i++)
    {
        for(j=i+1;j<number;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n the sorted array is");
     for(i=0;i<number;i++)
    {
        printf("%d",a[i]);
    } 
    printf("\n %d",a[number/2]);
    
}
