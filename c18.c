#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbner of elemnets of the array: ");
    scanf("%d",&n);

    int a[n];
    int i;
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int *ptr,*ptr1;
    ptr=a;
    ptr1=&a[n-1];
    printf("The array is:");
    while(ptr<=ptr1){
        
        printf(" %d ",*ptr);
        ptr++;
    }
    
    return 0;
}