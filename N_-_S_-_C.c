#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,s,c;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        s=pow(i,2);
        c=pow(i,3);
        printf("%d %d %d
",i,s,c);
    }
}