#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
   int max=a[0], max2=a[0];
   for(i=1;i<n;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
        if(a[i]>max && a[i]!=max){
            max2=a[i];
        }
    } 
    printf("The 2nd largest element is: %d",max2);

    return 0;
}