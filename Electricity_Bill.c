#include<stdio.h>
int main()
{
    float u,c,b,s,co;
    scanf("%f",&u);
    if(u<=199)co=1.20;
    else if(u>=200&&u<400)co=1.40;
    else if(u>=400&&u<600)co=1.60;
    else if(u>=600&&u<800)co=1.80;
    else if(u>=800)co=2.00;
    c=u*co;
    if(c>400)s=c*0.15;
    else s=0;
    b=c+s;
    printf("Units Consumed: %0.0f
Cost per Unit: %0.2f
Bill: %0.2f
Surcharge: %0.2f
Total Amount: %0.2f",u,co,c,s,b);
}