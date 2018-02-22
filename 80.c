#include <stdio.h>
void  main() 
{
	int n,temp;
	scanf("%d",&n);
	while(n!=0) 
	{
		temp=n%10;
		if((temp%2)!=0)
		{
		    printf("%d",temp);
		}
		n=n/10;
	}
}	
	
