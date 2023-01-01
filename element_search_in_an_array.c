#include<stdio.h>
int main()
{
    int n,m,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)c=1;
    }
    if(c==1)printf("True");
    else printf("False");
}