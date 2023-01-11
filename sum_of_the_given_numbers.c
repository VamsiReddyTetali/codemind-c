#include<stdio.h>
int main()
{
    int n,i,a,b,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("%d
",s);
    }
}