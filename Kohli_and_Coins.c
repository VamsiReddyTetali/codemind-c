#include<stdio.h>
int main()
{
    int x,y,z,t,to;
    scanf("%d",&x);
    y=x/10;
    z=(x-y*10)/5;
    to=y*10+z*5;
    t=y+z;
    if(to==x)printf("%d",t);
    else printf("-1");
}