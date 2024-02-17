#include<stdio.h>
void swap(int *a,int *b){
    *a=*a+ *b;
    *b=*a- *b;
    *a=*a- *b;
}
int main(){
    int a,b;
    printf("Enter the two numbers before swapping: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The swapped values are: %d %d",a,b);
    return 0;
}