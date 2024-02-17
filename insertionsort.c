#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
//int flag=0;
int j;
    for(i=1;i<n;i++){
        //int temp=a[j];
        j=i;
        while(j>0 && a[j-1]>a[j]){
            //if(a[j]>temp){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                //flag=1;
                j--;

            }
            //a[j+1]=temp;
            //else
              //  break;
        }
        //if(flag=0)
            
    
    printf("\nThe sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

    
    return 0;
}