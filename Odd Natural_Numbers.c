#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;2*i-1<=n;i++)printf("%d ",i*2-1);
}