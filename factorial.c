#include<stdio.h>
int main(){
    int i,x,fact=1,n;
    float sum=1;
    scanf("%d",&x); 
    scanf("%d",&n); 
    for(i=2;i<=n;i++){
        fact=fact*i;
        sum=sum+(float)x/fact;
    }
        printf("%f",sum);
    return 0;
}