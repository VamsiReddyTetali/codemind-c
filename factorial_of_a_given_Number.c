#include<stdio.h>
int main()
{
    int n,c=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)c=c*i;
    printf("%d",c);
}