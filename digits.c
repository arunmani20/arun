#include <stdio.h>
void main()
{
    int num,test,cnt;
    printf("Enter a number: ");
    scanf("%d",&num);
    cnt=0;
    test=num;
    while(test>0){
        cnt++;
        test/=10;
    }
    printf(" numbers of digits are: %d in number: %d.",cnt,num);
}
