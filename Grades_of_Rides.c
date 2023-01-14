#include<stdio.h>
int main()
{
    int h,s,sp,g;
    scanf("%d%d%d",&h,&s,&sp);
    if(h>50&&s>60&&sp>100)g=10;
    else if(h>50&&s>60)g=9;
    else if(s>60&&sp>100)g=8;
    else if(h>50&&sp>100)g=7;
    else if(h>50||s>60||sp>100)g=6;
    else g=5;
    printf("%d",g);
}