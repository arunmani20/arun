#include<stdio.h>
void main()
{
	int x,y,n,j;
	char ch;
	printf("Enter the Number of Operations:");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d%c%d",&x,&ch,&y);
		if(j%2==0)
		{
			printf("\n%d",(x/y));
		}
		else
		{
			printf("\n%d",(x%y));
		}
	}
	
}
