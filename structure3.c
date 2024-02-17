#include<stdio.h>
struct distance{
    int feet;
    int inches;
};

int main(){
    struct distance a,b;
    printf("The distance 1:\n");
    printf("Enter the distance in feet: ");
    scanf("%d",&a.feet);
    printf("\nEnter the distance in inches: ");
    scanf("%d",&a.inches);

    printf("The distance 2: \n");
    printf("\nEnter the distance in feet: ");
    scanf("%d",&b.feet);
    printf("\nEnter the distance in inches: ");
    scanf("%d",&b.inches);

    struct distance c;
    c.feet=a.feet+b.feet;
    c.inches=a.inches+b.inches;

    if(c.inches>11){
        c.feet=c.feet+1;
        c.inches=c.inches%12;
    }

    printf("Total distance is:\n ");
    printf("Feet distance is:%d\n ",c.feet);
    printf("Inches distance is:%d\n ",c.inches);
    return 0;
}