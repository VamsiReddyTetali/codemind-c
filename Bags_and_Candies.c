#include<stdio.h>
int main()
{
    int n,k,m,a,t;
    scanf("%d%d%d",&n,&k,&m);
    a=k*m;
    t=n/a;
    if(n%a==0)printf("%d",t);
    else printf("%d",t+1);
}