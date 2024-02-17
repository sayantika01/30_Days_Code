#include<stdio.h> 
#include<math.h> 
void main(){
    int x,i,n,fact=1;
    float sum=0;
    printf("Enter the value of x and n respectively: ");
    scanf("%d%d",&x,&n);

    for(i=0;i<=n;i++){
        fact*=i;
        sum+=(float)pow(x,i)/fact;
    }
        printf("%f",sum);
    //return 0;
}