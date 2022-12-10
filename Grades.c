#include<stdio.h>
int main()
{
    float p,c,b,m,co,t,pe;
    scanf("%f%f%f%f%f",&p,&c,&b,&m,&co);
    t=(p+c+b+m+co)/500;
    pe=t*100;
    if(pe>=90)printf("Grade A");
    else if(pe>=80&&pe<90)printf("Grade B");
    else if(pe>=70&&pe<80)printf("Grade C");
    else if(pe>=60&&pe<70)printf("Grade D");
    else if(pe>=40&&pe<60)printf("Grade E");
    else if(pe<40)printf("Grade F");
}