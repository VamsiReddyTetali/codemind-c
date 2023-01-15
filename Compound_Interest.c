#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,c,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=pow(1+r/100,t);
    ci=p*c-p;
    printf("%0.2lf",ci);
}