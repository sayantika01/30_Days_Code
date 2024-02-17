#include<stdio.h> 
#include<math.h> 
int main(){
    float x,i,n,fact=1;
    float sum=1;
    printf("Enter the value of x and n respectively: ");
    scanf("%f%f",&x,&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+(pow(x,i)/fact);
    }
        printf("%f",sum);
    return 0;
}