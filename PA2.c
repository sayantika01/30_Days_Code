//Write a C program to search an element from an array using recursive binary search
//technique.

#include<stdio.h>

int main(){
    int n,x,i;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     printf("Enter the elements to be searched: ");
     scanf("%d",&x);
     for(i=0;i<n;i++){
        if(a[i]==x)
        printf("%d",i);
     }
    return 0;
}