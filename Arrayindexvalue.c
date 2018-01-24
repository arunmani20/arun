#include<stdio.h>
void main()
{
	int i,n,a[10];
	printf("\n Enter the number of array elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d %d",a[i],i);
	}
	
}
