#include <stdio.h>
 
void main()
{
    int num, temp, digit, sum = 0;
 
    printf("Enter the number ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num =num/ 10;
    }
    printf("%d", sum);
}
