#include<stdio.h>
#include<math.h>
int main(){
    int n,x,fact=1,i,m;
    float sum=1;
    printf("Enter the value of x and n respectively: ");
    scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++){
        fact*=i;
        m=x*i;
        sum+=(float)m/fact;
    }
    printf("%f",sum);
    return 0;
}