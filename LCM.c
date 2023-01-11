#include<stdio.h>
int main()
{
    int a,b,max,i;
    scanf("%d%d",&a,&b);
    max=a*b;
    for(i=1;i<=max;i++)
    {
        if(i%a==0&&i%b==0)
        break;
    }
    printf("%d",i);
}