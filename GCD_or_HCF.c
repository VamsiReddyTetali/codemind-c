#include<stdio.h>
int main()
{
    int n,m,i,c;
    scanf("%d%d",&n,&m);
    for(i=1;i<m;i++)
    {
        if(n%i==0&&m%i==0)
        c=i;
    }
    printf("%d",c);
}