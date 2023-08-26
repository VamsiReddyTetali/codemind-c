#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int b[n];
    int k=0;
    for(int i=0;i<n;i++){
        int c=0,d=a[i];
        for(int j=0;j<n;j++){
            if(a[j]==d)c++;
        }
        if(c==1){
            b[k]=d;
            k++;
        }}
    if(k!=0)
    {
        for(int i=0;i<k;i++)printf("%d ",b[i]);
    }
    else printf("-1");
}