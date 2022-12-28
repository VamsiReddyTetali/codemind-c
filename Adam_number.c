#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,rev=0,a,sa,sr,rs=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    sa=pow(a,2);
    sr=pow(rev,2);
    while(sr>0)
    {
        rem=sr%10;
        rs=rs*10+rem;
        sr=sr/10;
    }
    if(sa==rs)printf("True");
    else printf("False");
}