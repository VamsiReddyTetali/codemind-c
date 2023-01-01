#include<stdio.h>
int main()
{
    int n,i;
    float avg,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    avg=c/n;
    printf("%.2f",avg);
}