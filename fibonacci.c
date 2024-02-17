#include<stdio.h>
int main(){
    int a=0,b=1,c=0,n;
    scanf("%d",&n);
    printf(" %d",a); 
    printf(" %d",b); 
    for(int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
    
    return 0;
}