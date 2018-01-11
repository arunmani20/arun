#include<stdio.h>
void  main()
{
    int number,temp, rem, result = 0;

    printf("Enter the number ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        rem = temp%10;
        result =result+ rem*rem*rem;
        temp =temp/ 10;
    }

    if(result == number)
        printf("\n %d is an Armstrong number.",number);
    else
        printf("\n %d is not an Armstrong number.",number);
}
        
