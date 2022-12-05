#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    z=z-y;
    x=z/x;
    printf("%d",x);
}