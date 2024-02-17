#include<stdio.h>
void main(){
    float a,b;
    printf("Enter the number: ");
    scanf("%f %f",&a,&b);
    if(a>b)
    printf("The number %f is greatest", a);
    else 
        printf("The number %fs is greatest.",b);

}