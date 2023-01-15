#include<stdio.h>
int main()
{
    int s,t,b,k,kb;
    scanf("%d%d%d",&s,&t,&b);
    k=2*s*t*b*512;
    kb=k/1024;
    printf("%d KB",kb);
}