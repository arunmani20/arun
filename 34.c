
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[25];
int i= 0, k;
scanf("%[^\n]s", s1);
for (k = 0;s1[k] != '\0';k++)
{   if (s1[k]=='.')
  i++;
   }
 printf("no of lines is  %d ", i+1);

}
