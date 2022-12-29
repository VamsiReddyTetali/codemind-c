#include<stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(x+y==w||x+z==w||y+z==w)printf("YES");
    else if(x==w||y==w||z==w)printf("YES");
    else printf("NO");
}