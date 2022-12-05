#include<stdio.h>
int main()
{
    int x,y;
    float a;
    scanf("%d%d",&x,&y);
    a=(x+y)/2.0;
    printf("Average of %d and %d is: %0.2f",x,y,a);
}