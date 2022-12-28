#include<stdio.h>
int main()
{
    int n,rem,rev=0,a;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(a==rev)printf("True");
    else printf("False");
}