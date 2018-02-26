#include<stdio.h>
void main()
{
	int n,i,a[10],sum=0;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    sum=sum+a[i];
	}
	printf("\n the sum is %d",sum);
}
