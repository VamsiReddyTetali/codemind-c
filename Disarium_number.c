#include<stdio.h>
#include<math.h>
int main()
{
    int n,h,r,s=0,t;
    scanf("%d",&n);
    t=n;
    h=log10(n)+1;
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,h);
        n=n/10;
        h--;
    }
    if(t==s)printf("True");
    else printf("False");
}