#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,b,c=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=n-1-i;
        d=a[i]*pow(2,b);
        c=c+d;
    }
    printf("%d",c);
}