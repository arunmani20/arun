#include<stdio.h>
void main()
{
    int l,w,h;
    scanf("%d %d %d",&l,&w,&h);
    int v=(l*w*h);
    printf("\n volume of cuboid is %d",v);
    int SA=2*(l*w)+2*(l*h)+2*(h*w);
    printf("\n total surface area is %d",SA);
    
}
