#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,a,r=0,i=0;
    scanf("%d",&n);
    a=n;
    s=pow(n,2);
    while(n>0)
    {
        r=r+(s%10)*pow(10,i);
        s=s/10;
        n=n/10;
        i++;
    }
    if(a==r)printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}