#include<stdio.h>
int binarysearch(int a[],int n,int x){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(x==a[mid])
        return mid;
        else if(x<a[mid])
            r=mid-1;
        else
            l=mid+1;

    }
    return -1;
}
int main(){
    int n,x;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&x);
   int result=binarysearch(a,n,x);
   if(result==-1)
    printf("Element not found");
    else
    printf("The elememt is found at %d",result);
    
    return 0;
}