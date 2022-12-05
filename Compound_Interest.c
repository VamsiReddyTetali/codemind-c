#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,c,ci;
    scanf("%f%f%f",&p,&r,&t);
    c=pow(1+r/100,t);
    ci=p*c-p;
    printf("%0.2f",ci);
}