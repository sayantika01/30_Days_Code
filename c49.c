//Student's details using array of pointers to a structure
#include<stdio.h>
#include<string.h>  
#include<stdlib.h>  
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
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student *ps[n];
    //ps1=&s1;
//Reading students,s details 
    printf("\nEnter the details of 1st student: ");
    for(int i=0;i<n;i++)
    {
        ps[i]=(struct student *)malloc(sizeof(struct student));
        printf("\nThe details of %dth student: ",i+1);
        printf("\n Roll number: ");
        scanf("%d",&ps[i]->Roll);
        printf("\n Name: ");
        scanf("%s",&ps[i]->names);
        printf("\n Date of birth: ");
        scanf("%s",&ps[i]->DOB);
        printf("\n Contact number: ");
        scanf("%s",&ps[i]->phone_number);
    }
    
//Displaying details of a student
    printf("_____DETAILS OF STUDENTS______\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nThe details of %dth student: ",i+1);
        printf("\n\n Roll number:%d ",ps[i]->Roll);
        //scanf("",);
        printf("\n\n Name:%s ",ps[i]->names);
        //scanf("%d",&s.names[]);
        printf("\n\n Date of Birth:%s ",ps[i]->DOB);
        //scanf("%d",&s.DOB);
        printf("\n\n Contact number:%s ",ps[i]->phone_number);
        //scanf("%d",&s.phone_number);
    }
    return 0;
}