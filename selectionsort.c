#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
            if(min!=i){
                int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        
    }

    printf("Sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}