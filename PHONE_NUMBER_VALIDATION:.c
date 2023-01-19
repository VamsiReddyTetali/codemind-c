#include<stdio.h>
#include<math.h>
int main()
{
    int n,h;
    float x;
    scanf("%d",&n);
    h=log10(n)+1;
    x=n/pow(10,8);
    if(h!=10&&x<1)printf("Invalid");
    else printf("Valid");
}