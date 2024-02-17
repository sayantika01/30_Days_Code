#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("The range of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nThe elements of the array are :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nMean:");
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    int m=(float)sum/n;
    float sum1=0;
    for(i=0;i<n;i++){
        int k=(a[i]-m)*(a[i]-m);
        sum1=sum1+k;
    }
    float v=sum1/n;
    float sd=sqrt(v);

    printf("\nmean=%d",m);
    printf("\nvariance=%f",v); 
    printf("\nsstandard deviation=%f",sd); 
}