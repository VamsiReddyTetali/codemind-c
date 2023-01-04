#include<stdio.h>
int main()
{
    int m,n,i,j,c=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            c=c+a[i][j];
        }
    }
    printf("%d",c);
    
}