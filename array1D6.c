#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
   int min=a[0], min2=a[0];
   for(i=1;i<n;i++){
        if(a[i]<min){
            min2=min;
            min=a[i];
        }
        if(a[i]<min && a[i]!=min){
            min2=a[i];
        }
    } 
    printf("The 2nd largest element is: %d",min2);

    return 0;
}