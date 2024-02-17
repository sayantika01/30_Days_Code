#include<stdio.h>
int main(){
    int n,i,c;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=n-1;i++){
        
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;

                
            }  
        }
            break;
    }
    
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}