#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int t,a,r,re=0;
        scanf("%d",&a);
        t=a;
        while(a>0)
        {
            r=a%10;
            re=re*10+r;
            a=a/10;
        }
        if(t==re)printf("True
");
        else printf("False
");
    }
}