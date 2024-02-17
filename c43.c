//Student's details using structure
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
    struct student s1;
//Reading students,s details   
        printf("\nEnter the details of 1st student: ");
        printf("\n Roll number: ");
        scanf("%d",&s1.Roll);
        printf("\n Name: ");
        scanf("%s",s1.names);
        printf("\n Date of birth: ");
        scanf("%s",s1.DOB);
        printf("\n Contact number: ");
        scanf("%s",s1.phone_number);
    
//Displaying details of a student
    printf("The details of the students:\n");
    
        printf("\nThe details of %dth student: ",i+1);
        printf("\n Roll number:%d ",s1.Roll);
        //scanf("",);
        printf("\n Name:%s ",s1.names);
        //scanf("%d",&s.names[]);
        printf("\n Date of Birth:%s ",s1.DOB);
        //scanf("%d",&s.DOB);
        printf("\n Contact number:%s ",s1.phone_number);
        //scanf("%d",&s.phone_number);
    
    return 0;
}