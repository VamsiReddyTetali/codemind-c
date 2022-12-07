#include<stdio.h>
#include<math.h>
int main()
{
    float a,s,v;
    scanf("%f",&a);
    s=6*a*a;
    v=pow(a,3);
    printf("Surface area = %.2f and Volume = %.2f",s,v);
}