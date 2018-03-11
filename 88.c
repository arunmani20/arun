#include <stdio.h>
void main()
{
    int n1, n2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    minMultiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("The LCM is  %d ",minMultiple);
            break;
        }
        ++minMultiple;
    }

}
