#include <stdio.h>

void main()
{
	int a[100],i,j,n,temp,b[100],count=0;
	printf("\nEnter the number of value");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(a[i]>a[j])
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 }
		}
	}
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				count++;
			}
		}
		printf("\n %d changes .",count);
	
}
