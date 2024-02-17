#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];int i;

    //Array elements
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m1=a[0];
    int m2=a[1];
     for(i=0;i<n;i++){
        if(a[i]>m1){
            m1=a[i];
        }
     }
     for(i=0;i<n;i++){
        if(a[i]!=m1){
            if(a[i]>m2){
                m2=a[i];
            }
        }
     }

     printf("Second largest is %d\n",m2);
     printf("Largest is %d",m1);
    

return 0;
}