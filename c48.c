//Student's details using structure using pointer
#include<stdio.h>
#include<string.h>
struct student
{
    int Roll;
    char names[20];
    char DOB[20];
    char phone_number[10];
};
int main()
{
    int n,i;
    //printf("Enter the number of students:");
    //scanf("%d",&n);
    struct student s1, *ps1;
    ps1=&s1;
//Reading students,s details   
        printf("\nEnter the details of 1st student: ");
        printf("\n Roll number: ");
        scanf("%d",&ps1->Roll);
        printf("\n Name: ");
        scanf("%s",ps1->names);
        printf("\n Date of birth: ");
        scanf("%s",ps1->DOB);
        printf("\n Contact number: ");
        scanf("%s",ps1->phone_number);
    
//Displaying details of a student
    printf("The details of the students:\n");
    
        printf("\n\nThe details of %dth student: ",i+1);
        printf("\n\n Roll number:%d ",ps1->Roll);
        //scanf("",);
        printf("\n\n Name:%s ",ps1->names);
        //scanf("%d",&s.names[]);
        printf("\n\n Date of Birth:%s ",ps1->DOB);
        //scanf("%d",&s.DOB);
        printf("\n\n Contact number:%s ",ps1->phone_number);
        //scanf("%d",&s.phone_number);
    
    return 0;
}