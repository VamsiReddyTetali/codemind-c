#include<stdio.h>
int main()
{
    int n,r,s,c=0,a;
    scanf("%d",&n);
    a=n;
    s=n*n;
    while(s>0)
    {
        r=s%10;
        c=c+r;
        s=s/10;
    }
    if(c==a)printf("Neon Number");
    else printf("Not Neon Number");
}