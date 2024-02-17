//to read, display, add, subtract two complex numbers
#include<stdio.h>
typedef struct Complex
{
    int real;
    int imag;

}complex;
int main()
{
    complex c1,c2,a_c,s_c;
    int c;
    do
    {
        printf("\nMenu: ");
        printf("\n1.Reading the complex number:\n "); 
        printf("\n2.Displaying the complex number:\n "); 
        printf("\n3.Adding the complex number:\n "); 
        printf("\n4.Subtracting the complex number:\n "); 
        printf("\n5.Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("Readiing the complex numbers:\n");
                    printf("Enter the real and imaginary part of the 1st complex number:");
                    scanf("%d %d",&c1.real,&c1.imag);
                    printf("\nEnter the real and imaginary part of the 2nd complex number:");
                    scanf("%d %d",&c2.real,&c2.imag);
                    break;
            case 2: printf("Displaying the complex numbers:\n");
                    printf("1st complex number are %d+%di: ",c1.real,c1.imag);
                    printf("\n2nd complex number are %d+%di: ",c2.real,c2.imag);
                    break;
            case 3: printf("Adding the complex numbers:\n");
                    a_c.real=c1.real+c2.real;
                    a_c.imag=c1.imag+c2.imag;
                    printf("The sum is:%d+%di ",a_c.real, a_c.imag);
                    break;
            case 4: printf("Subtraction of the complex number: ");
                    a_c.real=c1.real-c2.real;
                    a_c.imag=c1.imag-c2.imag;
                    printf("The subtraction is:%d+%di ",a_c.real, a_c.imag);
                    break;   
        }   
    } while (c!=5);
    
    return 0;
}