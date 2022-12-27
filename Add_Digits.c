#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=9)printf("%d",n);
    else if(n%9==0)printf("9");
    else printf("%d",n%9);
}