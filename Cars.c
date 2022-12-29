#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n/4;
    if(n%4==0)printf("%d",t);
    else printf("%d",t+1);
}