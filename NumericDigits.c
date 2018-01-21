#include <stdio.h>
void main()
{
 int val,count;

    printf("Enter an number ");
    scanf("%d",&val);

    while(val != 0)
    {
        val = val/10;
       
        ++count;
    }

    printf("Number of digits: %d", count);
}
