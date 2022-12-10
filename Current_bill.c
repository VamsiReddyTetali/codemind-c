#include<stdio.h>
int main()
{
    float u,b,c,s;
    scanf("%f",&u);
    if(u<=199)c=u*1.20;
    else if(u>=200&&u<400)c=u*1.50;
    else if(u>=400&&u<600)c=u*1.80;
    else if(u>=600)c=u*2.00;
    if(c>400)c=c+c*0.15;
    else c=c+100;
    printf("%0.2f",c);
}