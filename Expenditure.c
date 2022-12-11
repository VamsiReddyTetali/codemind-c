#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    y=y*30;
    if((x-y)>=0)printf("YES");
    else printf("NO");
}