#include<stdio.h>
int main()
{
    float b,h,d,p,g;
    scanf("%f",&b);
    if(b<=10000)d=b*0.8,h=b*0.2;
    else if(b<=20000&&b>=10000)d=b*0.9,h=b*0.25;
    else if(b>20000)d=b*0.95,h=b*0.3;
    g=b+d+h;
    printf("%0.2f",g);
}