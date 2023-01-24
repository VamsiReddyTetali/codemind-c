#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)c++;
        }
        if(c==0&&i!=1)printf("%d
",i);
    }
}