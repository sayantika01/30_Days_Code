#include<stdio.h>
#include<math.h>
void main(){
    int a1,b1,a2,b2;
    float d,A,B;
        printf("Enter the values of 1st point: ");
            scanf("%d%d",&a1,&b1);
        printf("Enter the values of 1st point: ");
            scanf("%d%d",&a2,&b2);
    A=a2-a1;
    B=b2-b1;
    //d=sqrt(((b2-b1)*(b2-b1))+((a2-a1)*(a2-a1)));
    d=sqrt(pow(A,2)+pow(B,2));
        printf("The distance between two points: %f",d);
}