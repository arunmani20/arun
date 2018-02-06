include <stdio.h>
#include <string.h>
void main()
{
    char s[25];
int i= 0, k;
scanf("%[^\n]s", s);
for (k = 0;s[k] != '\0';k++)
{   if (s[k] == ' ')
  i++;
   }
 printf(" spaces is  %d ", i);

}
