//Write a program in C to convert a decimal number to a binary number using function.


/*#include<stdio.h>
int main(){
float n;


    return 0;
}*/
#include <stdio.h>
void bin(float a){

     int quotient = a;
    int binary[32];
    int i=0;
    while (quotient != 0) {
        binary[i] = quotient % 2;
        quotient /= 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

}

int main() {
    float decimal, quotient, i = 0;
    

    printf("Enter a decimal number: ");
    scanf("%f", &decimal);

    /*quotient = decimal;

    while (quotient != 0) {
        binary[i] = quotient % 2;
        quotient /= 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }*/
    bin(decimal);
    return 0;
}

/*#include <stdio.h>

int main() {
    double decimal;
    float integer_part, binary_int[32], fractional_part[32], i = 0, j = 0;

    printf("Enter a decimal number: ");
    scanf("%lf", &decimal);

    integer_part = (int) decimal;

    while (integer_part != 0) {
        binary_int[i] = integer_part % 2;
        integer_part /= 2;
        i++;
    }

    printf("Binary integer part: ");

    for (int k = i - 1; k >= 0; k--) {
        printf("%f", binary_int[k]);
    }

    printf("\n");
    return 0;
}*/
