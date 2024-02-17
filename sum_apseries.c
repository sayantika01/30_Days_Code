#include<stdio.h>
int main(){
    int n,cd,a,b,i,sum=0;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    cd=b-a;

    for(i=1;i<=n;i+=cd){
        printf("\n%d",i);
        sum+=i; //sum=sum+i
    }
    printf(" %d",sum);

    return 0;
}