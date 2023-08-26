#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c,d;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0)c+=a[i];
        else d+=a[i];
    }
    int e=abs(c-d);
    if(e%4==0)printf("X");
    else printf("Y");
}