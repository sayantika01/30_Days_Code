#include<stdio.h>
int main(){
    int i,n,max,min;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
        max=a[0];
        min=a[0];
    
    
    for(i=1;i<n;i++){
        if(a[i]>max){
            
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];

        min=a[i];
        }
    }
    printf("The max is: %d",max);

    printf("The min is: %d",min);
    
    return 0;
}