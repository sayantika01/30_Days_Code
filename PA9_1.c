#include<stdio.h>
void swap(int *a,int *b,int temp){
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b,temp;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&b);

    printf("\nThe numbers before swapping: %d %d",a,b);
    
    swap(&a,&b,&temp);
    printf("\n The numbers after swapping: %d %d ",a,b);

    return 0;
}