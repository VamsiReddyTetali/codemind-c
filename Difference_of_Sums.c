#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=0,b=0,s,sq,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+pow(i,2);
        b=b+i;
    }
    d=pow(b,2)-a;
    printf("%d",d);
}