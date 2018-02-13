#include <stdio.h>

int main()
{  int n1,n2,a,n;
  scanf("%d %d",&n1,&n2);
  printf("\n the numbers are %d %d",n1,n2);
  n=n1*n2;
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("\n perfect square");
            return 0;
        }
    }
    printf("\n NOT perfect square");
    return 0;
}
