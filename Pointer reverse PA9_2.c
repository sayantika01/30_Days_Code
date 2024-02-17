#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    int i;
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    int b[n];
    int *c=a;
    int *d=b;
    for(i=0;i<n;i++){
        *(d+i)=*(c+n-1-i)
    }

    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }
    return 0;
}