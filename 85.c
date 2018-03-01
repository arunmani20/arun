#include<stdio.h>
void  main()
{
    char a[10];
    int i;
    printf("Enter the string");
    scanf("%s",a);
  
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2 == 0)
        {
            printf("\n odd %c",a[i]);
        }
    }
    
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2 == 1)
        {
            printf("\n even %c",a[i]);
        }
    }
    
}
