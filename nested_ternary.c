#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    a>=40?(a>50?(a>60?(a>70?(a>80?(a>90?printf("O"):printf("A+")):printf("A")):printf("B")):printf("C")):printf("D")):printf("Fail");
}