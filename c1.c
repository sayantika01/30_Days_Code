#include<stdio.h>
int main(){
    //area of a circle
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    float area=0;
    area=3.14*r*r;
    printf("The area of the circle=%.2f",area);
    return 0;
    
}