#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(b>a&&c>a)p=b+c;
    else if(a>b&&c>b)p=a+c;
    else if(a>c&&b>c)p=a+b;
    printf("%d",p);
}