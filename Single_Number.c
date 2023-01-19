#include<stdio.h>
int main()
{
    int n,i,j,t,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        for(j=0;j<n;j++)
        {
            if(t==a[j])c++;
        }
        if(c==1)printf("%d",t);
        c=0;
    }
}