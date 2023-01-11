#include<stdio.h>
int main()
{
    int n,r,s=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        int i,p=1;
        for(i=r;i>=1;i--)
        {
            p=p*i;
        }
        s=s+p;
        n=n/10;
    }
    if(t==s)printf("The number %d is a strong number",t);
    else printf("The number %d is not a strong number",t);
}