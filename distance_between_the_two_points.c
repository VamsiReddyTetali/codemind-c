#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float di;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    di=sqrt(pow(c-a,2)+pow(d-b,2));
    printf("%0.4f",di);
}