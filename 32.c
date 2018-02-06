#include <stdio.h>
#include <string.h>
void main()
{
    char s[200];
int cou= 0, k;
scanf("%[^\n]s", s);
for (k = 0;s[k] != '\0';k++)
{   if (s[k] == ' ')
  cou++;    
   }
 printf("number of words is %d ", cou+ 1);

}

