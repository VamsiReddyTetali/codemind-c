#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&x,&a,&b);
    b=b*2;
    c=a+b;
    if(c>=x)printf("Qualify");
    else printf("Not Qualify");
}