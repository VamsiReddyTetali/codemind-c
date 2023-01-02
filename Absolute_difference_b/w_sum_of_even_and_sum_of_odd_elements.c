#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)c=c+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)d=d+a[i];
    }
    int  f=abs(d-c);
    printf("%d",f);
}