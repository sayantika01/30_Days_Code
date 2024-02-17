#include<stdio.h>
int maxsearch(int a[],int n){
    if(n==1)
    return a[0];

    int max=maxsearch(a,n-1);
    return (max>a[n-1])? max:a[n-1];
}

int minsearch(int a[],int n){
    if(n==1)
    return a[0];
    int min=minsearch(a,n-1);
    return (min<a[n-1])? min:a[n-1];
    
}

int main(){
    int n,max,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max=maxsearch(a,n); 
    min=minsearch(a,n); 

    printf("the maximum of the array elements are:%d ",max); 
    printf("\nthe minimum of the array elements are:%d ",min); 
}